import { reactive } from 'vue';
<template>
    <div class="content">
        <ul>
            <li v-for="news in newList" :key="new.id">
                <a herf="#">{{ news.title }}</a>
            </li>
        </ul>
    </div>
</template>
<script>
import { title } from 'process';
import {ref,reactive} from 'vue'
const newsList =reactive([
    {id:'11',title:'11',content:'11'},
    {id:'12',title:'22',content:'22'},
    {id:'13',title:'33',content:'33'}
])
</script>
<style>

</style>