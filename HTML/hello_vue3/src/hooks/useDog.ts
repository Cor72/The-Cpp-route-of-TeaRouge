import { ref } from 'vue'
import axios from 'axios'

export function useDog() {
let dogList=ref([
'https://images.dog.ceo/breeds/terrier-westhighland/n02098286_5604.jpg'
]) 
const addDog=()=>{
axios.get('https://dog.ceo/api/breed/pembroke/images/random').then(res=>{
    dogList.value.push(res.data.message)
})
}
  return { dogList, addDog }
}