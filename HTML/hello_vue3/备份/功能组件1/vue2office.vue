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






<template>
    <div class="person">
      <div class="button">
      し：<input type="text" v-model="name">
      なまえ：<input type="text" v-model="dename">
      </div>

      <br>
      こんにちは、{{name}}{{dename}}さん
      </br>
    </div>
</template> 

<script>
export default {
  name: 'Person'
}
</script>

<script setup>
import {ref,reactive} from 'vue'
let name = ref('')
let dename = ref('')


</script>





<template>
    <div class="person">
      <h2>{{name}}</h2>
      <h2>{{age}}</h2>
      <h2>{{Dragon.name}}</h2>
      <h2>{{Dragon.age}}</h2>
      <div class="button">
        <button @click="changeAge">こばやぃ</button>
        <button @click="changeMaidAge">めいどのねんれい</button>
        <button @click="changeName">こばやぃ</button>
        <button @click="changeMaidName">めいどのしめい</button>
      </div>
    </div>
</template> 

<script>
export default {
  name: 'Person'
}
</script> 

<script setup>
import {ref,reactive, h, watch} from 'vue'
let name = ref('小林')
let age = ref(25)

let Dragon = ref({
  name: 'トール',
  age: 16
})
let changeName = () => {
  name.value += '~'
}
let changeAge = () => {
  age.value += 1
}
let changeMaidName = () => {
  Dragon.value.name += '~'
}
let changeMaidAge = () => {
  Dragon.value.age += 1
}
// watch(() => age.value, (newValue, oldValue) => {
//   console.log(`${oldValue}から${newValue}に変更されました`)
// })
const stopWatch = watch(age, (newValue, oldValue) => {
  console.log(`${oldValue}から${newValue}に変更されました`)
  if(newValue >= 30)
  stopWatch()
})


</script>

<style scoped>
.person {
    width: 300px;
    height: 400px;
    margin: auto;
    padding: 20px;
    /* font-size: 20px; */
    background: linear-gradient(120deg, #e0c3fc 0%, #8ec5fc 100%) no-repeat;
    /* background: linear-gradient(320deg, #0a1a40 0%, #3a7ecf 30%, #a0d8f0 60%, #ffffff 100%); */
    border-radius: 10px;
    box-shadow: 0 0 10px rgba(0,0,0,0.5);
}
.button{
  display: flex;
  flex-direction: column;
  align-items: center;
  border: none;
  outline: none;
  margin-top: 20px;
  padding: 10px;
  /* background: linear-gradient(120deg, #e0c3fc 0%, #8ec5fc 100%) */
}
</style>











<template>
    <div class="app">
        <Person :list="personList" />
    </div>
</template>

<script lang="ts" setup>
import Person from './components/person.vue'
import { reactive,ref} from 'vue';
import { type PersonInter} from './types/index';
let personList = ref<PersonInter[]>([
  {name:'こばやし',age:25,sex:'おとこ'},
  {name:'トール',age:16,sex:'おとこ'},
  {name:'カンナカムイ',age:9,sex:'おとこ'},
])

</script>

<template>
    <div class="person">
      <ul>
        <!-- 修正1：key使用唯一属性 -->
        <li v-for="p in list" :key="p.name">
          {{p.name}} - {{p.age}}歳 - {{p.sex}}
        </li>
      </ul>
      <div class="button">
      </div>
    </div>
</template>

<script setup lang="ts">
import { type PersonInter } from '../types/index'

// 修正2：使用defineOptions设置组件名（Vue 3.3+）
defineOptions({
  name: 'Person'
})

// 修正3：props类型改为数组
defineProps<{
  list?:PersonInter[]  // 注意这里是数组类型
}>()
</script>

export interface PersonInter {
    name: string;
    age: number;
    sex: string;
}

export const a=9;