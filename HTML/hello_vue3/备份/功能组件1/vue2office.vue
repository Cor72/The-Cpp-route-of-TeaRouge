  // data() {
  //   return {  
  //     name: 'テスト',
  //     age: 18,
  //     sex: 'male',
  //   }
  // },
  // methods:{
  //   showTel(){
  //     alert(this.name)
  //   },
  //   changeAge(){
  //     this.age = this.age + 1
  //   }

  // }

  <script>
export default {
  name: 'Person',
  setup() {
    let name='小林'
    let age=20
    let sex='おんな'
    
    function changeAge() {
      age=age+1
    }

    return {name: name, age: age, sex: sex ,changeAge}
    // return () => 'かの'
  },

}
</script>









<template>
    <div class="person">
      <h2>氏名（しめい）：{{ name }}</h2>
      <h2>ねんれい：{{age}}</h2>
      <h2>せいべつ：{{sex}}</h2>
      <h2>maid:{{maid.name}}</h2>
      <h2>トールのねんれい：{{maid.age}}</h2>
      <!-- <button @click= 'showTel'>変更</button> -->
      <button @click= 'changeAge'>ねんれい</button>
      <button @click= "changeMaidAge">トール</button>
      <button @click= "changeMaid">トールです</button>
    </div>
</template> 

<script>
export default {
  name: 'Person'
}
</script>

<script setup>
import {ref,reactive} from 'vue'
let name=ref('こばやし')
let age=ref(20)
let sex='おんな'
let maid=ref({name:'トール',age:119,sex:'おんな'})
function changeAge() {
  age.value=age.value+1;
}
function changeMaidAge() {
  maid.value.age=maid.value.age+1
}
function changeMaid() {
  // Object.assign(maid.value,{name:'トールです',age:21,sex:'おんな'})
  maid.value={name:'トールです',age:21,sex:'おんな'}
}
</script>