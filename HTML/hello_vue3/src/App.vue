<template>
    <div class="app">
        <Person></Person>
        <Person></Person>
        <Person></Person>
    </div>
</template>

<script lang="ts">
import Person from './components/person.vue'
export default {
    name: 'App',
    components: { Person },
}
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
 