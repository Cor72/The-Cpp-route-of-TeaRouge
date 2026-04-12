<template>
    <div class="app">
        <h2>Vue路由测试</h2>
        <div class="navigate">
            <a href="#">あい</a>
            <a href="#">いえ</a>
            <a href="#">せつな</a>
        </div>
        <div class="content">
            こばやし
        </div>
    </div>
</template>

<script lang="ts" setup>
import Person from './components/person.vue'
import { reactive,ref} from 'vue';
import { type PersonInter} from './types/index';
</script>

<style>
/* 全局样式 - 放在组件样式外部 */
body {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: Arial, sans-serif;
    background: linear-gradient(320deg, #0a1a40 0%, #3a7ecf 30%, #a0d8f0 60%, #ffffff 100%);
    min-height: 100vh;
    color: #333;
}

/* 组件样式 */
.app {
    padding: 20px;
    max-width: 800px;
    margin: 0 auto;
}

h2 {
    text-align: center;
    margin-bottom: 20px;
    color: #0a1a40;
}

.navigate {
    background: linear-gradient(120deg, #e0c3fc 0%, #8ec5fc 100%);
    padding: 15px;
    border-radius: 8px;
    margin-bottom: 20px;
    display: flex;
    justify-content: center;
    gap: 30px;
    box-shadow: 0 2px 5px rgba(0,0,0,0.1);
}

.navigate a {
    text-decoration: none;
    color: #333;
    font-weight: bold;
    padding: 8px 16px;
    border-radius: 4px;
    transition: background-color 0.3s, transform 0.2s;
}

.navigate a:hover {
    background-color: rgba(255, 255, 255, 0.6);
    transform: scale(1.05);
}

.content {
    background-color: rgba(255, 255, 255, 0.8);
    padding: 25px;
    border-radius: 8px;
    text-align: center;
    font-size: 18px;
    box-shadow: 0 2px 5px rgba(0,0,0,0.1);
}
</style>
