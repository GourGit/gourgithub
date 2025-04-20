const mongoose = require("mongoose");

const userData = new mongoose.Schema({
    name: {
        type: String,
        required: true
    },
    email: {
        type: String,
        required: true
    },
    college: {
        type: String,
        required: true
    },
    event: {
        type: String,
        required: true
    }
});

const Register = mongoose.model("userData", userData);

module.exports = Register;
