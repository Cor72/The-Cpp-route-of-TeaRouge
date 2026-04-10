<template>
    <div class="person">
      <h2>{{person.name}}</h2><br><h2>{{ person.age }}</h2>
      <div class="button">
        <button @click="person.age++">ねんれい</button>
      </div>
      <hr>
      <img v-for="(dog,index) in dogList" :src="dog" alt="AAA" key="index">
      <button @click="addDog">かわい</button>
    </div>
</template>

<script setup>
import { ref } from 'vue'
import { useDog } from '../hooks/useDog'
import { useSum } from '../hooks/useSum'

const {dogList,addDog} = useDog()
const  {person,changeAge}= useSum()
</script>

<style scoped>
.person {
    width: 300px;
    height: 400px;
    margin: auto;
    padding: 20px;
    background: linear-gradient(120deg, #e0c3fc 0%, #8ec5fc 100%) no-repeat;
    border-radius: 10px;
    box-shadow: 0 0 10px rgba(0,0,0,0.5);
    
}
.button{
  display: flex;
  flex-direction: column;
/*   align-items: center; */
  border: none;
  outline: none;
  margin-top: 20px;
  padding: 10px;
}
img{
  height: 100px;
  margin-right: 10px;
}
</style>
