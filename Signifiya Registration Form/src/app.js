const express=require("express")
const port= process.env.PORT || 3000
const app=express()
const hbs=require("hbs")
const path=require('path')
const views_path=path.join(__dirname,"../template/view")
const body_parser=require("body-parser")
app.use(body_parser.json())
app.use(body_parser.urlencoded(extended=false))
const mongoose=require("mongoose")
require("./db/conn")
const register=require("./model/register")
app.set("view engine","hbs")
app.set("views",views_path)




app.listen(port,()=>{
  console.log(`Running in Port: ${port}`)
})

app.get("/index",(req,res)=>{
  res.render("index")
})

// app.post("/send",(req,res)=>{
//
// })

app.get("/data",(req,res)=>{
  res.send("I AM COMING FROM BACKEND !")
})

app.get("/geo",(req,res)=>{
  res.send("THIS IS A MINOR CLASS")
})


app.get("/bca",(req,res)=>{
  res.send("this is a full stack class")
})

app.post("/send",(req,res)=>{
  const { name, email, college, event } = req.body;
  console.log(name)
  console.log(email)
  console.log(college)
  console.log(event)


  const save_data=new register({name,email,college,event})
  save_data.save().then(
      ()=>{
        console.log("Data Saved to DB !")
      }
  ).catch(
      (e)=>{
        console.log(`Error: ${e}`)
      }
  )
  res.send("Data send to backend !")
})


app.get("/display",async(req,res)=>{
  const data=await register.find()
  console.log(data)
  res.render("display",{data})
  // res.send("DATA DISPLAYED IN BACKEND !")
})

app.post("/update",async(req,res)=>{
  const name=req.body.name
  const id=req.body.id
  const btn=req.body.btn
  var status

  if(btn==="UPDATE"){
    const update=await register.updateOne({"_id":new mongoose.Types.ObjectId(id)},{$set:{"name":name}})
    status=1
  }
  if(btn==="DELETE"){
    const del=await register.deleteOne({"_id":new mongoose.Types.ObjectId(id)})
    status=2
    console.log(status)
  }
  const data= await register.find()
  res.render("display",{data,status})
})