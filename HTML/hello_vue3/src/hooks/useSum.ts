import { ref } from 'vue'
import axios from 'axios'

export function useSum() {
const person=ref({name:'こばやし',age:25,sex:'おんな'})
const changeAge=()=>{
  person.value.age++
}
  return { person, changeAge }
}