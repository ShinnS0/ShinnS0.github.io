import { createApp } from 'vue'
import App from './App.vue'
import router from './router'

import Bootstrap from 'bootstrap'
// Import Bootstrap and BootstrapVue CSS files (order is important)
// import 'bootstrap-vue/dist/bootstrap-vue.css'
import 'bootstrap/dist/css/bootstrap.css'

createApp(App).use(router,Bootstrap).mount('#app')
