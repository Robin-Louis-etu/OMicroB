#define OCAML_STACK_WOSIZE                32
#define OCAML_STATIC_HEAP_WOSIZE           0
#define OCAML_DYNAMIC_HEAP_WOSIZE         32
#define OCAML_FLASH_HEAP_WOSIZE           59
#define OCAML_STACK_INITIAL_WOSIZE         7
#define OCAML_RAM_GLOBDATA_NUMBER          0
#define OCAML_FLASH_GLOBDATA_NUMBER        9
#define OCAML_BYTECODE_BSIZE             390
#define OCAML_PRIMITIVE_NUMBER             3
#define OCAML_VIRTUAL_ARCH                32
#define OCAML_STARTING_OOID                0
#define OCAML_NO_FLASH_HEAP                0
#define OCAML_NO_FLASH_GLOBALS             0

#define OCAML_GC_MARK_AND_COMPACT

#include </home/robin/SU/PSTL/OMicroB/src/byterun/vm/values.h>

#define OCAML_ACC0                        0
#define OCAML_ACC1                        1
#define OCAML_ACC2                        2
#define OCAML_PUSH                        3
#define OCAML_PUSHACC1                    4
#define OCAML_PUSHACC2                    5
#define OCAML_PUSHACC3                    6
#define OCAML_PUSHACC4                    7
#define OCAML_PUSHACC5                    8
#define OCAML_PUSHACC7                    9
#define OCAML_POP                        10
#define OCAML_APPLY1                     11
#define OCAML_APPLY2                     12
#define OCAML_RETURN                     13
#define OCAML_RESTART                    14
#define OCAML_GRAB                       15
#define OCAML_PUSHGETFLASHGLOBAL_1B      16
#define OCAML_BRANCH_1B                  17
#define OCAML_BRANCH_2B                  18
#define OCAML_BRANCHIF_1B                19
#define OCAML_BRANCHIFNOT_1B             20
#define OCAML_SWITCH_1B                  21
#define OCAML_CHECK_SIGNALS              22
#define OCAML_C_CALL2                    23
#define OCAML_CONST0                     24
#define OCAML_CONST1                     25
#define OCAML_CONST2                     26
#define OCAML_CONST3                     27
#define OCAML_CONSTINT_1B                28
#define OCAML_PUSHCONSTINT_1B            29
#define OCAML_LEINT                      30
#define OCAML_BGTINT_1B                  31
#define OCAML_STOP                       32

value ocaml_stack[OCAML_STACK_WOSIZE];
value ocaml_ram_heap[OCAML_STATIC_HEAP_WOSIZE + OCAML_DYNAMIC_HEAP_WOSIZE];
value ocaml_ram_global_data[OCAML_RAM_GLOBDATA_NUMBER];

PROGMEM value const ocaml_flash_heap[OCAML_FLASH_HEAP_WOSIZE] = {
  /*  0 */  Make_header(0, 0, Color_white),
  /*  1 */  Make_header(2, Object_tag, Color_white),
  /*  2 */  Val_flash_block(&ocaml_flash_heap[5]),
  /*  3 */  Val_int(-1),
  /*  4 */  Make_header(4, String_tag, Color_white),
  /*  5 */  Make_string_data('O', 'u', 't', '_'),
  /*  6 */  Make_string_data('o', 'f', '_', 'm'),
  /*  7 */  Make_string_data('e', 'm', 'o', 'r'),
  /*  8 */  Make_string_data('y', '\0', '\0', '\2'),
  /*  9 */  Make_header(2, Object_tag, Color_white),
  /* 10 */  Val_flash_block(&ocaml_flash_heap[13]),
  /* 11 */  Val_int(-3),
  /* 12 */  Make_header(2, String_tag, Color_white),
  /* 13 */  Make_string_data('F', 'a', 'i', 'l'),
  /* 14 */  Make_string_data('u', 'r', 'e', '\0'),
  /* 15 */  Make_header(2, Object_tag, Color_white),
  /* 16 */  Val_flash_block(&ocaml_flash_heap[19]),
  /* 17 */  Val_int(-4),
  /* 18 */  Make_header(5, String_tag, Color_white),
  /* 19 */  Make_string_data('I', 'n', 'v', 'a'),
  /* 20 */  Make_string_data('l', 'i', 'd', '_'),
  /* 21 */  Make_string_data('a', 'r', 'g', 'u'),
  /* 22 */  Make_string_data('m', 'e', 'n', 't'),
  /* 23 */  Make_string_data('\0', '\0', '\0', '\3'),
  /* 24 */  Make_header(2, Object_tag, Color_white),
  /* 25 */  Val_flash_block(&ocaml_flash_heap[28]),
  /* 26 */  Val_int(-6),
  /* 27 */  Make_header(5, String_tag, Color_white),
  /* 28 */  Make_string_data('D', 'i', 'v', 'i'),
  /* 29 */  Make_string_data('s', 'i', 'o', 'n'),
  /* 30 */  Make_string_data('_', 'b', 'y', '_'),
  /* 31 */  Make_string_data('z', 'e', 'r', 'o'),
  /* 32 */  Make_string_data('\0', '\0', '\0', '\3'),
  /* 33 */  Make_header(2, Object_tag, Color_white),
  /* 34 */  Val_flash_block(&ocaml_flash_heap[37]),
  /* 35 */  Val_int(-9),
  /* 36 */  Make_header(4, String_tag, Color_white),
  /* 37 */  Make_string_data('S', 't', 'a', 'c'),
  /* 38 */  Make_string_data('k', '_', 'o', 'v'),
  /* 39 */  Make_string_data('e', 'r', 'f', 'l'),
  /* 40 */  Make_string_data('o', 'w', '\0', '\1'),
  /* 41 */  Make_header(1, Closure_tag, Color_white),
  /* 42 */  Val_codeptr(51),
  /* 43 */  Make_header(1, Closure_tag, Color_white),
  /* 44 */  Val_codeptr(270),
  /* 45 */  Make_header(1, Closure_tag, Color_white),
  /* 46 */  Val_codeptr(102),
  /* 47 */  Make_header(1, Closure_tag, Color_white),
  /* 48 */  Val_codeptr(309),
  /* 49 */  Make_header(1, Closure_tag, Color_white),
  /* 50 */  Val_codeptr(214),
  /* 51 */  Make_header(1, Closure_tag, Color_white),
  /* 52 */  Val_codeptr(158),
  /* 53 */  Make_header(1, Closure_tag, Color_white),
  /* 54 */  Val_codeptr(290),
  /* 55 */  Make_header(1, Closure_tag, Color_white),
  /* 56 */  Val_codeptr(25),
  /* 57 */  Make_header(1, Closure_tag, Color_white),
  /* 58 */  Val_codeptr(3)
};

PROGMEM value const ocaml_initial_static_heap[OCAML_STATIC_HEAP_WOSIZE] = {
};

PROGMEM value const ocaml_initial_stack[OCAML_STACK_INITIAL_WOSIZE] = {
  /* 0 */  Val_int(10),
  /* 1 */  Val_int(1),
  /* 2 */  Val_int(8),
  /* 3 */  Val_int(7),
  /* 4 */  Val_int(9),
  /* 5 */  Val_int(11),
  /* 6 */  Val_int(10)
};

PROGMEM value const ocaml_flash_global_data[OCAML_FLASH_GLOBDATA_NUMBER] = {
  /* 0 */  Val_flash_block(&ocaml_flash_heap[44]),
  /* 1 */  Val_flash_block(&ocaml_flash_heap[46]),
  /* 2 */  Val_flash_block(&ocaml_flash_heap[48]),
  /* 3 */  Val_flash_block(&ocaml_flash_heap[50]),
  /* 4 */  Val_flash_block(&ocaml_flash_heap[52]),
  /* 5 */  Val_flash_block(&ocaml_flash_heap[54]),
  /* 6 */  Val_flash_block(&ocaml_flash_heap[42]),
  /* 7 */  Val_flash_block(&ocaml_flash_heap[56]),
  /* 8 */  Val_flash_block(&ocaml_flash_heap[58])
};

value acc = Val_flash_block(&ocaml_flash_heap[42]);
value env = Val_unit;

#define OCAML_Out_of_memory        Val_flash_block(&ocaml_flash_heap[2])
#define OCAML_Failure              Val_flash_block(&ocaml_flash_heap[10])
#define OCAML_Invalid_argument     Val_flash_block(&ocaml_flash_heap[16])
#define OCAML_Division_by_zero     Val_flash_block(&ocaml_flash_heap[25])
#define OCAML_Stack_overflow       Val_flash_block(&ocaml_flash_heap[34])

#define OCAML_atom0                Val_flash_block(&ocaml_flash_heap[1])

PROGMEM opcode_t const ocaml_bytecode[OCAML_BYTECODE_BSIZE] = {
  /*   0 */  OCAML_BRANCH_2B, 1, 69,
  /*   3 */  OCAML_ACC0,
  /*   4 */  OCAML_PUSHGETFLASHGLOBAL_1B, 0,
  /*   6 */  OCAML_APPLY1,
  /*   7 */  OCAML_PUSHACC1,
  /*   8 */  OCAML_PUSHGETFLASHGLOBAL_1B, 1,
  /*  10 */  OCAML_APPLY1,
  /*  11 */  OCAML_PUSH,
  /*  12 */  OCAML_PUSHACC2,
  /*  13 */  OCAML_C_CALL2, 0,
  /*  15 */  OCAML_PUSH,
  /*  16 */  OCAML_BRANCHIFNOT_1B, 5,
  /*  18 */  OCAML_CONST0,
  /*  19 */  OCAML_RETURN, 4,
  /*  21 */  OCAML_CONST1,
  /*  22 */  OCAML_RETURN, 4,
  /*  24 */  OCAML_RESTART,
  /*  25 */  OCAML_GRAB, 1,
  /*  27 */  OCAML_ACC0,
  /*  28 */  OCAML_PUSHGETFLASHGLOBAL_1B, 2,
  /*  30 */  OCAML_APPLY1,
  /*  31 */  OCAML_PUSHACC1,
  /*  32 */  OCAML_PUSHGETFLASHGLOBAL_1B, 3,
  /*  34 */  OCAML_APPLY1,
  /*  35 */  OCAML_PUSHACC3,
  /*  36 */  OCAML_BRANCHIFNOT_1B, 8,
  /*  38 */  OCAML_ACC0,
  /*  39 */  OCAML_PUSHACC2,
  /*  40 */  OCAML_C_CALL2, 1,
  /*  42 */  OCAML_RETURN, 4,
  /*  44 */  OCAML_ACC0,
  /*  45 */  OCAML_PUSHACC2,
  /*  46 */  OCAML_C_CALL2, 2,
  /*  48 */  OCAML_RETURN, 4,
  /*  50 */  OCAML_RESTART,
  /*  51 */  OCAML_GRAB, 1,
  /*  53 */  OCAML_ACC0,
  /*  54 */  OCAML_PUSHGETFLASHGLOBAL_1B, 2,
  /*  56 */  OCAML_APPLY1,
  /*  57 */  OCAML_PUSHACC1,
  /*  58 */  OCAML_PUSHGETFLASHGLOBAL_1B, 3,
  /*  60 */  OCAML_APPLY1,
  /*  61 */  OCAML_PUSHACC2,
  /*  62 */  OCAML_PUSHGETFLASHGLOBAL_1B, 4,
  /*  64 */  OCAML_APPLY1,
  /*  65 */  OCAML_PUSHACC3,
  /*  66 */  OCAML_PUSHGETFLASHGLOBAL_1B, 5,
  /*  68 */  OCAML_APPLY1,
  /*  69 */  OCAML_PUSHACC5,
  /*  70 */  OCAML_SWITCH_1B, 3, 0, 6, 16, 22,
  /*  76 */  OCAML_ACC1,
  /*  77 */  OCAML_PUSHACC1,
  /*  78 */  OCAML_C_CALL2, 1,
  /*  80 */  OCAML_ACC2,
  /*  81 */  OCAML_PUSHACC4,
  /*  82 */  OCAML_C_CALL2, 1,
  /*  84 */  OCAML_RETURN, 6,
  /*  86 */  OCAML_ACC1,
  /*  87 */  OCAML_PUSHACC1,
  /*  88 */  OCAML_C_CALL2, 2,
  /*  90 */  OCAML_RETURN, 6,
  /*  92 */  OCAML_ACC1,
  /*  93 */  OCAML_PUSHACC1,
  /*  94 */  OCAML_C_CALL2, 1,
  /*  96 */  OCAML_ACC2,
  /*  97 */  OCAML_PUSHACC4,
  /*  98 */  OCAML_C_CALL2, 2,
  /* 100 */  OCAML_RETURN, 6,
  /* 102 */  OCAML_ACC0,
  /* 103 */  OCAML_SWITCH_1B, 24, 0, 35, 38, 41, 44, 47, 51, 27, 31, 35, 38, 41, 44, 47, 51, 47, 51, 44, 35, 35, 38, 41, 44, 47, 51,
  /* 130 */  OCAML_CONSTINT_1B, 6,
  /* 132 */  OCAML_RETURN, 1,
  /* 134 */  OCAML_CONSTINT_1B, 7,
  /* 136 */  OCAML_RETURN, 1,
  /* 138 */  OCAML_CONST0,
  /* 139 */  OCAML_RETURN, 1,
  /* 141 */  OCAML_CONST1,
  /* 142 */  OCAML_RETURN, 1,
  /* 144 */  OCAML_CONST2,
  /* 145 */  OCAML_RETURN, 1,
  /* 147 */  OCAML_CONST3,
  /* 148 */  OCAML_RETURN, 1,
  /* 150 */  OCAML_CONSTINT_1B, 4,
  /* 152 */  OCAML_RETURN, 1,
  /* 154 */  OCAML_CONSTINT_1B, 5,
  /* 156 */  OCAML_RETURN, 1,
  /* 158 */  OCAML_ACC0,
  /* 159 */  OCAML_SWITCH_1B, 24, 0, 35, 38, 41, 44, 47, 51, 27, 31, 35, 38, 41, 44, 47, 51, 47, 51, 44, 35, 35, 38, 41, 44, 47, 51,
  /* 186 */  OCAML_CONSTINT_1B, 6,
  /* 188 */  OCAML_RETURN, 1,
  /* 190 */  OCAML_CONSTINT_1B, 7,
  /* 192 */  OCAML_RETURN, 1,
  /* 194 */  OCAML_CONST0,
  /* 195 */  OCAML_RETURN, 1,
  /* 197 */  OCAML_CONST1,
  /* 198 */  OCAML_RETURN, 1,
  /* 200 */  OCAML_CONST2,
  /* 201 */  OCAML_RETURN, 1,
  /* 203 */  OCAML_CONST3,
  /* 204 */  OCAML_RETURN, 1,
  /* 206 */  OCAML_CONSTINT_1B, 4,
  /* 208 */  OCAML_RETURN, 1,
  /* 210 */  OCAML_CONSTINT_1B, 5,
  /* 212 */  OCAML_RETURN, 1,
  /* 214 */  OCAML_ACC0,
  /* 215 */  OCAML_SWITCH_1B, 24, 0, 35, 38, 41, 44, 47, 51, 27, 31, 35, 38, 41, 44, 47, 51, 47, 51, 44, 35, 35, 38, 41, 44, 47, 51,
  /* 242 */  OCAML_CONSTINT_1B, 6,
  /* 244 */  OCAML_RETURN, 1,
  /* 246 */  OCAML_CONSTINT_1B, 7,
  /* 248 */  OCAML_RETURN, 1,
  /* 250 */  OCAML_CONST0,
  /* 251 */  OCAML_RETURN, 1,
  /* 253 */  OCAML_CONST1,
  /* 254 */  OCAML_RETURN, 1,
  /* 256 */  OCAML_CONST2,
  /* 257 */  OCAML_RETURN, 1,
  /* 259 */  OCAML_CONST3,
  /* 260 */  OCAML_RETURN, 1,
  /* 262 */  OCAML_CONSTINT_1B, 4,
  /* 264 */  OCAML_RETURN, 1,
  /* 266 */  OCAML_CONSTINT_1B, 5,
  /* 268 */  OCAML_RETURN, 1,
  /* 270 */  OCAML_ACC0,
  /* 271 */  OCAML_BGTINT_1B, 8, 15,
  /* 274 */  OCAML_ACC0,
  /* 275 */  OCAML_BGTINT_1B, 18, 7,
  /* 278 */  OCAML_CONSTINT_1B, 7,
  /* 280 */  OCAML_RETURN, 1,
  /* 282 */  OCAML_CONSTINT_1B, 6,
  /* 284 */  OCAML_RETURN, 1,
  /* 286 */  OCAML_CONSTINT_1B, 8,
  /* 288 */  OCAML_RETURN, 1,
  /* 290 */  OCAML_ACC0,
  /* 291 */  OCAML_BGTINT_1B, 8, 14,
  /* 294 */  OCAML_ACC0,
  /* 295 */  OCAML_BGTINT_1B, 18, 7,
  /* 298 */  OCAML_CONSTINT_1B, 4,
  /* 300 */  OCAML_RETURN, 1,
  /* 302 */  OCAML_CONST3,
  /* 303 */  OCAML_RETURN, 1,
  /* 305 */  OCAML_CONSTINT_1B, 5,
  /* 307 */  OCAML_RETURN, 1,
  /* 309 */  OCAML_ACC0,
  /* 310 */  OCAML_BGTINT_1B, 8, 12,
  /* 313 */  OCAML_ACC0,
  /* 314 */  OCAML_PUSHCONSTINT_1B, 18,
  /* 316 */  OCAML_LEINT,
  /* 317 */  OCAML_BRANCHIFNOT_1B, 3,
  /* 319 */  OCAML_CONST1,
  /* 320 */  OCAML_RETURN, 1,
  /* 322 */  OCAML_CONST2,
  /* 323 */  OCAML_RETURN, 1,
  /* 325 */  OCAML_APPLY2,
  /* 326 */  OCAML_CONST1,
  /* 327 */  OCAML_PUSHACC4,
  /* 328 */  OCAML_PUSHGETFLASHGLOBAL_1B, 6,
  /* 330 */  OCAML_APPLY2,
  /* 331 */  OCAML_CONST1,
  /* 332 */  OCAML_PUSHACC3,
  /* 333 */  OCAML_PUSHGETFLASHGLOBAL_1B, 6,
  /* 335 */  OCAML_APPLY2,
  /* 336 */  OCAML_CONST0,
  /* 337 */  OCAML_PUSHACC5,
  /* 338 */  OCAML_PUSHGETFLASHGLOBAL_1B, 7,
  /* 340 */  OCAML_APPLY2,
  /* 341 */  OCAML_CONST0,
  /* 342 */  OCAML_PUSHACC4,
  /* 343 */  OCAML_PUSHGETFLASHGLOBAL_1B, 7,
  /* 345 */  OCAML_APPLY2,
  /* 346 */  OCAML_CONST0,
  /* 347 */  OCAML_PUSHACC3,
  /* 348 */  OCAML_PUSHGETFLASHGLOBAL_1B, 7,
  /* 350 */  OCAML_APPLY2,
  /* 351 */  OCAML_CONST2,
  /* 352 */  OCAML_PUSHACC2,
  /* 353 */  OCAML_PUSHGETFLASHGLOBAL_1B, 6,
  /* 355 */  OCAML_APPLY2,
  /* 356 */  OCAML_CONST2,
  /* 357 */  OCAML_PUSHACC1,
  /* 358 */  OCAML_PUSHGETFLASHGLOBAL_1B, 6,
  /* 360 */  OCAML_APPLY2,
  /* 361 */  OCAML_BRANCH_1B, 23,
  /* 363 */  OCAML_CHECK_SIGNALS,
  /* 364 */  OCAML_ACC1,
  /* 365 */  OCAML_PUSHGETFLASHGLOBAL_1B, 8,
  /* 367 */  OCAML_APPLY1,
  /* 368 */  OCAML_PUSHACC1,
  /* 369 */  OCAML_PUSHGETFLASHGLOBAL_1B, 8,
  /* 371 */  OCAML_APPLY1,
  /* 372 */  OCAML_PUSHACC1,
  /* 373 */  OCAML_PUSHACC5,
  /* 374 */  OCAML_PUSHGETFLASHGLOBAL_1B, 7,
  /* 376 */  OCAML_APPLY2,
  /* 377 */  OCAML_ACC0,
  /* 378 */  OCAML_PUSHACC7,
  /* 379 */  OCAML_PUSHGETFLASHGLOBAL_1B, 7,
  /* 381 */  OCAML_APPLY2,
  /* 382 */  OCAML_POP, 2,
  /* 384 */  OCAML_CONST1,
  /* 385 */  OCAML_BRANCHIF_1B, (opcode_t) -22,
  /* 387 */  OCAML_POP, 5,
  /* 389 */  OCAML_STOP
};

#include </home/robin/SU/PSTL/OMicroB/src/byterun/vm/runtime.c>

PROGMEM void * const ocaml_primitives[OCAML_PRIMITIVE_NUMBER] = {
  /*  0 */  (void *) &caml_read_bit,
  /*  1 */  (void *) &caml_clear_bit,
  /*  2 */  (void *) &caml_set_bit,
};
