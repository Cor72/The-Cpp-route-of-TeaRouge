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

<style scoped>
.person {
    width: 300px;
    height: 300px;
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

}
</style>