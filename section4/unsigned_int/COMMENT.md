##### Interesting observation about the compiler and unsigned int wrap-around behavior

The compiler caught the positive wrap-around, but not the negative wrap-around. Both programs still compiled, but the g++ compiler warned me about the positive wrap-around behavior, but did not warn me about the negative.
