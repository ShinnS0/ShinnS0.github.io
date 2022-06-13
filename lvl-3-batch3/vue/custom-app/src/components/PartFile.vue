<template>
    <h1>{{shop_msg}}</h1>
    <h2>This is a part of each page.</h2>
</template>

<script>

export default {
  name: 'PartFile',
  props: {
    parent: String,
    shop_msg :String
  },
}

</script>