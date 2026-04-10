<template>
    <div class="app">
        <Person/>
    </div>
</template>

<script lang="ts" setup>
import Person from './components/person.vue'
import { reactive,ref} from 'vue';
import { type PersonInter} from './types/index';

</script>

<style>
.app{

    height: 100vh;
    display: flex;
    justify-content: center;
    background: linear-gradient(320deg, #0a1a40 0%, #3a7ecf 30%, #a0d8f0 60%, #ffffff 100%);
    /* background: linear-gradient(120deg, #e0c3fc 0%, #8ec5fc 100%) no-repeat; */


}
</style>
 