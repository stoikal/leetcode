// https://leetcode.com/problems/sleep/

/**
 * @param {number} millis
 * @return {Promise}
 */
function sleep(millis) {
    return new Promise((res) => setTimeout(res, millis));
}

/** 
 * let t = Date.now()
 * sleep(100).then(() => console.log(Date.now() - t)) // 100
 */