#ifndef _WIN_USER_SETTINGS_H_
#define _WIN_USER_SETTINGS_H_

/* Verify this is Windows */
#ifndef _WIN32
#error This user_settings.h header is only designed for Windows
#endif

#define WOLFSSL_MINI_BUILD 1
#define WOLFSSL_REDIRECT_RANDOM 1

#ifdef WOLFSSL_REDIRECT_RANDOM
#undef  CUSTOM_RAND_GENERATE_BLOCK
#undef  CUSTOM_RAND_GENERATE_SEED
#undef  HAVE_HASHDRBG
extern int aa_generate_random_block_wolfssl(unsigned char* output, unsigned int sz);
extern int aa_generate_random_seed_wolfssl(unsigned char* output, unsigned int sz);
#define  CUSTOM_RAND_GENERATE_BLOCK aa_generate_random_block_wolfssl
#define  CUSTOM_RAND_GENERATE_SEED  aa_generate_random_seed_wolfssl
#else
#undef  HAVE_HASHDRBG
#define HAVE_HASHDRBG
#endif

#ifdef  WOLFSSL_MINI_BUILD

#undef  NO_SHA256
#define NO_SHA256

#undef  NO_AES
#define NO_AES

#undef  NO_DSA
#define NO_DSA

#undef  HAVE_ECC
#define HAVE_ECC

#undef  WOLFSSL_HAVE_SP_ECC
#define WOLFSSL_HAVE_SP_ECC

#undef  WC_NO_ASYNC_THREADING
#define WC_NO_ASYNC_THREADING

#undef  NO_ERROR_STRINGS
#define NO_ERROR_STRINGS

#undef  NO_OLD_TLS
#define NO_OLD_TLS

#undef  WOLFSSL_NO_TLS12
#define WOLFSSL_NO_TLS12

#undef  WC_NO_RSA_OAEP
#define WC_NO_RSA_OAEP

#undef  NO_DH
#define NO_DH

#undef  WOLFSSL_NO_SHAKE128
#define WOLFSSL_NO_SHAKE128

#undef  WOLFSSL_NO_SHAKE256
#define WOLFSSL_NO_SHAKE256

#undef  NO_FILESYSTEM
#define NO_FILESYSTEM

#undef  NO_RC4
#define NO_RC4

#undef  NO_PSK
#define NO_PSK

#undef  NO_MD4
#define NO_MD4

#undef  WOLFCRYPT_ONLY
#define WOLFCRYPT_ONLY

#undef  NO_DES3
#define NO_DES3

#undef  NO_DO178
#define NO_DO178

#undef  NO_KDF
#define NO_KDF

#undef  NO_PWDBASED
#define NO_PWDBASED

#undef  NO_SIG_WRAPPER
#define NO_SIG_WRAPPER



#else
#define USE_WOLFSSL_IO
#define HAVE_AESGCM
#define WOLFSSL_TLS13
#define HAVE_HKDF
#define HAVE_FFDHE_4096
#define WC_RSA_PSS
#define WOLFSSL_DTLS
#define WOLFSSL_DTLS13
#define WOLFSSL_SEND_HRR_COOKIE
#define WOLFSSL_DTLS_CID
#define WOLFSSL_AESGCM_STREAM
#define WOLFSSL_AES_COUNTER
#define WOLFSSL_AES_DIRECT
#define WOLFSSL_KEY_GEN
#define WOLFSSL_HAVE_SP_ECC
#define WOLFSSL_HAVE_SP_DH
#define WOLFSSL_WOLFSSH
#define OPENSSL_EXTRA
#define WOLFSSL_SYS_CA_CERTS
#define NO_SESSION_CACHE_REF
#define WOLFSSL_DES_ECB
#define HAVE_ALPN
#define HAVE_CRL
#define HAVE_CRL_MONITOR
#define HAVE_OCSP
#define HAVE_CERTIFICATE_STATUS_REQUEST
#define HAVE_CERTIFICATE_STATUS_REQUEST_V2
#define WOLFSSL_ALT_CERT_CHAINS
#define WOLFSSL_IP_ALT_NAME
#define HAVE_SESSION_TICKET
#define HAVE_CURL
#define NO_MULTIBYTE_PRINT
#endif

#undef  USE_INTEL_SPEEDUP
#define USE_INTEL_SPEEDUP

#undef  WOLFSSL_HAVE_ATOMIC_H
#define WOLFSSL_HAVE_ATOMIC_H

#undef  HAVE_THREAD_LS
#define HAVE_THREAD_LS

#undef  ERROR_QUEUE_PER_THREAD
#define ERROR_QUEUE_PER_THREAD

#undef  TFM_TIMING_RESISTANT
#define TFM_TIMING_RESISTANT

#undef  ECC_TIMING_RESISTANT
#define ECC_TIMING_RESISTANT

#undef  WC_RSA_BLINDING
#define WC_RSA_BLINDING

#undef  WOLFSSL_USE_ALIGN
#define WOLFSSL_USE_ALIGN

#undef  WOLFSSL_ASN_TEMPLATE
#define WOLFSSL_ASN_TEMPLATE

#undef  HAVE_CHACHA
#define HAVE_CHACHA

#undef  HAVE_POLY1305
#define HAVE_POLY1305

#undef  HAVE_TLS_EXTENSIONS
#define HAVE_TLS_EXTENSIONS

#undef  HAVE_SNI
#define HAVE_SNI

#undef  HAVE_ENCRYPT_THEN_MAC
#define HAVE_ENCRYPT_THEN_MAC

#undef  WOLFSSL_HAVE_SP_RSA
#define WOLFSSL_HAVE_SP_RSA

#undef  WOLFSSL_SP_LARGE_CODE
#define WOLFSSL_SP_LARGE_CODE

#undef  WOLFSSL_SP
#define WOLFSSL_SP

#undef  WOLFSSL_SP_MATH_ALL
#define WOLFSSL_SP_MATH_ALL

#undef  WOLFSSL_SP_X86_64
#define WOLFSSL_SP_X86_64

#undef  GCM_TABLE_4BIT
#define GCM_TABLE_4BIT

#undef  WOLFSSL_TEST_STATIC_BUILD
#define WOLFSSL_TEST_STATIC_BUILD

#undef  HAVE_WC_INTROSPECTION
#define HAVE_WC_INTROSPECTION

#if defined (_WIN64 )
#undef  WOLFSSL_X86_64_BUILD
#define WOLFSSL_X86_64_BUILD

#undef  WOLFSSL_SP_ASM
#define WOLFSSL_SP_ASM

#undef  WOLFSSL_SP_X86_64_ASM
#define WOLFSSL_SP_X86_64_ASM

#undef  WOLFSSL_AESNI
#define WOLFSSL_AESNI
#endif

#endif /* _WIN_USER_SETTINGS_H_ */
