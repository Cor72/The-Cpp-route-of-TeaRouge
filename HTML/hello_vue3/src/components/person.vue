<template>
    <div class="person">

      <div class="button">
      </div>
    </div>
</template> 

<script>
export default {
  name: 'Person'
}
</script> 

<script setup>
import {ref,reactive,watch} from 'vue'
let person= ref({name:'こばやし',age:18,sex:'おとこ'})



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