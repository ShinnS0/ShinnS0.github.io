const app = Vue.createApp({
    data(){
        return{
            id:1,
            name:"Zwe kaung kyaw",
            age: 23,
            profile: "images/profile.png",
            para:'<span style="color:red;"> This is a test.</span>',
            seen:true,
            mark:30,
            students:[
                {name:"mg mg", age:20, gender:"male"},
                {name:"su su", age:22, gender:"female"},
                {name:"kyaw gyi", age:25, gender:"male"},
            ],
            username:"",
            money:150.12345,
        }
    },
    methods:{
        reverse(){
            this.name = this.name.split('').reverse().join('')
        },
    },
    computed:{
        girls(){
            return this.students.filter(row=> row.gender=="female")
        },
        boys(){
            return this.students.filter(row=> row.gender=="male")
        },
    },
    filters:{
        currencydecimal(value){
            return value.toFixed(2)
        }
    }
})