#include QMK_KEYBOARD_H
#include "version.h"

enum layer_names {
  BASE,
  SYMB,
  LAYR,
  LAYRONESHOT,
  EMPTY,
  GRK,
  ARR,
  BBB,
  LOGIC,
  REL,
  CALC,
  SET
};

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  EPRM,
  VRSN,
  RGB_SLD,
  TRIPLE_ZERO
}; 

enum unicode_names {
  //GRK
	rone,  // 1:: ⅰ
	rtwo,
	rthree,
	rfour,  // 4:: ⅳ
	rfive,  // 5:: ⅴ
	rsix,  // 6:: ⅵ
	rseven,  // 7:: ⅶ
	reight,  // 8:: ⅷ
	rnine,  // 9:: ⅸ
	rten,  // 0:: ⅹ
	gq,  // q:: θ
	gw,  // w:: ω
	ge,  // e:: ε
	gr,  // r:: ρ
	gt,  // t:: τ
	gy,  // y:: ψ
	gu,  // u:: υ
	gi,  // i:: ι
	go,  // o:: ο
	gp,  // p:: π
	ga,  // a:: α
	gs,  // s:: σ
	gd,  // d:: δ
	gf,  // f:: φ
	gg,  // g:: γ
	gh,  // h:: η
	gj,  // j:: ϑ
	gk,  // k:: κ
	gl,  // l:: λ
	gz,  // z:: ζ
	gx,  // x:: ξ
	gc,  // c:: χ
	gv,  // v:: ς
	gb,  // b:: β
	gn,  // n:: ν
	gm,  // m:: μ

  //GRKU
	Rone,  // 1:: Ⅰ
	Rtwo,  // 2:: Ⅱ
	Rthree,  // 3:: Ⅲ
	Rfour,  // 4:: Ⅳ
	Rfive,  // 5:: Ⅴ
	Rsix,  // 6:: Ⅵ
	Rseven,  // 7:: Ⅶ
	Reight,  // 8:: Ⅷ
	Rnine,  // 9:: Ⅸ
  Rten,
	Gq,  // Q:: Θ
	Gw,  // W:: Ω
	Ge,  // E:: Ε
	Gr,  // R:: Ρ
	Gt,  // T:: Τ
	Gy,  // Y:: Ψ
	Gu,  // U:: Υ
	Gi,  // I:: Ι
	Go,  // O:: Ο
	Gp,  // P:: Π
	Ga,  // A:: Α
	Gs,  // S:: Σ
	Gd,  // D:: Δ
	Gf,  // F:: Φ
	Gg,  // G:: Γ
	Gh,  // H:: Η
	Gj,  // J:: J
	Gk,  // K:: Κ
	Gl,  // L:: Λ
	Gz,  // Z:: Ζ
	Gx,  // X:: Ξ
	Gc,  // C:: Χ
	Gv,  // V:: V
	Gb,  // B:: Β
	Gn,  // N:: Ν
	Gm,  // M:: Μ

  //BL
  bq,
  bw,
  be,
  br,
  bt,
  by,
  bu,
  bi,
  bo,
  bp,
  ba,
  bs,
  bd,
  bf,
  bg,
  bh,
  bj,
  bk,
  bl,
  bz,
  bx,
  bc,
  bv,
  bb,
  bn,
  bm,

  //BU
  bQ,
  bW,
  bE,
  bR,
  bT,
  bY,
  bU,
  bI,
  bO,
  bP,
  bA,
  bS,
  bD,
  bF,
  bG,
  bH,
  bJ,
  bK,
  bL,
  bZ,
  bX,
  bC,
  bV,
  bB,
  bN,
  bM,
  
  //BN
  b0,
  b1,
  b2,
  b3,
  b4,
  b5,
  b6,
  b7,
  b8,
  b9,

  //ARR
  leftarrow, 
  rightarrow,
  uparrow,
  downarrow,
  Leftarrow,
  Rightarrow,
  Uparrow,
  Downarrow,
  barleftarrow,
  barrightarrow,
  baruparrow,
  bardownarrow,
  injection,
  surjection,
  bijection,
  monomorphism,
  epimorphism,
  retraction,
  section,
  leftupharpoon,
  rightupharpoon,
  uprightharpoon,
  downrightharpoon,
  
  //LOGIC
  ltack,
  rtack,
  utack,
  dtack,

  //REL
  llt,
  ggt,
  lllt,
  gggt,
  ltdot,
  gtdot,
  leq,
  geq,
  normalsubgroup,
  containsnormalsubgroup,
  normalsubgroupeq,
  containsnormalsubgroupeq,
  prec,
  succ,
  preceq,
  succeq,
  
  propto,
  oeq,
  andeq,
  oreq,
  tildetildeeq,
  tilde,
  tildeq,
  tildeqq,
  approx,
  tripletilde,
  //eq,
  tripleeq,
  quadeq,
  coloneq,
  eqcolon,
  defeq,
  doteq,
  stareq,
  deltaeq,
  questioneq,

  //CALC
  integral,
  iint,
  iiint,
  iiiint,
  intcirc,
  iintcirc,
  iiintcirc,
  intcircdot,
  clockwiseint,
  anticlockwiseint,
  clockwisecontourint,
  anticlockwisecontourint,
  upperint,
  lowerint,
  barint,
  barbarint,
  intersectint,
  unionint,
  slashint,
  cint,

  partiald, //U+2202
  increment, //U+2206
  nabla, //U+2207
  langlebracket, //U+2329
  ranglebracket, //U+232A
  prime, //U+2032
  doubleprime, //U+2033
  tripleprime, //U+2034
  dagger, //U+2020
  doubledagger, //U+2021
  
  //SET
  in,
  ni,
  nin,
  nni,
  subset,
  supset,
  subseteq,
  supseteq,
};

const uint32_t PROGMEM unicode_map[] = {
  //GREEKL
  [rone] = 0x2170,  // 1:: ⅰ
	[rtwo] = 0x2171,  // 2:: ⅱ
	[rthree] = 0x2172,  // 3:: ⅲ
	[rfour] = 0x2173,  // 4:: ⅳ
	[rfive] = 0x2174,  // 5:: ⅴ
	[rsix] = 0x2175,  // 6:: ⅵ
	[rseven] = 0x2176,  // 7:: ⅶ
	[reight] = 0x2177,  // 8:: ⅷ
	[rnine] = 0x2178,  // 9:: ⅸ
	[rten] = 0x2179,  // 0:: ⅹ
	[gq] = 0x03B8,  // q:: θ
	[gw] = 0x03C9,  // w:: ω
	[ge] = 0x03B5,  // e:: ε
	[gr] = 0x03C1,  // r:: ρ
	[gt] = 0x03C4,  // t:: τ
	[gy] = 0x03C8,  // y:: ψ
	[gu] = 0x03C5,  // u:: υ
	[gi] = 0x03B9,  // i:: ι
	[go] = 0x03BF,  // o:: ο
	[gp] = 0x03C0,  // p:: π
	[ga] = 0x03B1,  // a:: α
	[gs] = 0x03C3,  // s:: σ
	[gd] = 0x03B4,  // d:: δ
	[gf] = 0x03C6,  // f:: φ
	[gg] = 0x03B3,  // g:: γ
	[gh] = 0x03B7,  // h:: η
	[gj] = 0x03D1,  // j:: ϑ
	[gk] = 0x03BA,  // k:: κ
	[gl] = 0x03BB,  // l:: λ
	[gz] = 0x03B6,  // z:: ζ
	[gx] = 0x03BE,  // x:: ξ
	[gc] = 0x03C7,  // c:: χ
	[gv] = 0x03C2,  // v:: ς
	[gb] = 0x03B2,  // b:: β
	[gn] = 0x03BD,  // n:: ν
	[gm] = 0x03BC,  // m:: μ
  //GREEKU
	[Rone] = 0x2160,  // 1:: Ⅰ
	[Rtwo] = 0x2161,  // 2:: Ⅱ
	[Rthree] = 0x2162,  // 3:: Ⅲ
	[Rfour] = 0x2163,  // 4:: Ⅳ
	[Rfive] = 0x2164,  // 5:: Ⅴ
	[Rsix] = 0x2165,  // 6:: Ⅵ
	[Rseven] = 0x2166,  // 7:: Ⅶ
	[Reight] = 0x2167,  // 8:: Ⅷ
	[Rnine] = 0x2168,  // 9:: Ⅸ
	[Rten] = 0x2169,  // 0:: Ⅹ
	[Gq] = 0x0398,  // Q:: Θ
	[Gw] = 0x03A9,  // W:: Ω
	[Ge] = 0x0395,  // E:: Ε
	[Gr] = 0x03A1,  // R:: Ρ
	[Gt] = 0x03A4,  // T:: Τ
	[Gy] = 0x03A8,  // Y:: Ψ
	[Gu] = 0x03A5,  // U:: Υ
	[Gi] = 0x0399,  // I:: Ι
	[Go] = 0x039F,  // O:: Ο
	[Gp] = 0x03A0,  // P:: Π
	[Ga] = 0x0391,  // A:: Α
	[Gs] = 0x03A3,  // S:: Σ
	[Gd] = 0x0394,  // D:: Δ
	[Gf] = 0x03A6,  // F:: Φ
	[Gg] = 0x0393,  // G:: Γ
	[Gh] = 0x0397,  // H:: Η
	[Gj] = 0x004A,  // J:: J
	[Gk] = 0x039A,  // K:: Κ
	[Gl] = 0x039B,  // L:: Λ
	[Gz] = 0x0396,  // Z:: Ζ
	[Gx] = 0x039E,  // X:: Ξ
	[Gc] = 0x03A7,  // C:: Χ
	[Gv] = 0x0056,  // V:: V
	[Gb] = 0x0392,  // B:: Β
	[Gn] = 0x039D,  // N:: Ν
	[Gm] = 0x039C,  // M:: Μ

  //BL
  [bq] = 0x1D562,
  [bw] = 0x1D568,
  [be] = 0x1D556,
  [br] = 0x1D563,
  [bt] = 0x1D565,
  [by] = 0x1D56A,
  [bu] = 0x1D566,
  [bi] = 0x1D55A,
  [bo] = 0x1D560,
  [bp] = 0x1D561,
  [ba] = 0x1D552,
  [bs] = 0x1D564,
  [bd] = 0x1D555,
  [bf] = 0x1D557,
  [bg] = 0x1D558,
  [bh] = 0x1D559,
  [bj] = 0x1D55B,
  [bk] = 0x1D55C,
  [bl] = 0x1D55D,
  [bz] = 0x1D56B,
  [bx] = 0x1D569,
  [bc] = 0x1D554,
  [bv] = 0x1D567,
  [bb] = 0x1D553,
  [bn] = 0x1D55F,
  [bm] = 0x1D55E,

  //BU
  [bQ] = 0x211A,
  [bW] = 0x1D54E,
  [bE] = 0x1D53C,
  [bR] = 0x211D,
  [bT] = 0x1D54B,
  [bY] = 0x1D550,
  [bU] = 0x1D54C,
  [bI] = 0x1D540,
  [bO] = 0x1D546,
  [bP] = 0x2119,
  [bA] = 0x1D538,
  [bS] = 0x1D54A,
  [bD] = 0x1D53B,
  [bF] = 0x1D53D,
  [bG] = 0x1D53E,
  [bH] = 0x210D,
  [bJ] = 0x1D541,
  [bK] = 0x1D542,
  [bL] = 0x1D543,
  [bZ] = 0x2124,
  [bX] = 0x1D54F,
  [bC] = 0x2102,
  [bV] = 0x1D54D,
  [bB] = 0x1D539,
  [bN] = 0x2115,
  [bM] = 0x1D544,

  //BN
  [b0] = 0x1D7D8,
  [b1] = 0x1D7D9,
  [b2] = 0x1D7DA,
  [b3] = 0x1D7DB,
  [b4] = 0x1D7DC,
  [b5] = 0x1D7DD,
  [b6] = 0x1D7DE,
  [b7] = 0x1D7DF,
  [b8] = 0x1D7E0,
  [b9] = 0x1D7E1,

  //ARR
  [leftarrow] = 0x2190,         // ←
  [rightarrow] = 0x2192,        // →
  [uparrow] = 0x2191,           // ↑
  [downarrow] = 0x2193,         // ↓
  [Leftarrow] = 0x21D0,         // ⇐
  [Rightarrow] = 0x21D2,        // ⇒
  [Uparrow] = 0x21D1,           // ⇑
  [Downarrow] = 0x21D3,         // ⇓
  [barleftarrow] = 0x21A4,      // ↤
  [barrightarrow] = 0x21A6,     // ↦
  [baruparrow] = 0x21A5,        // ↥
  [bardownarrow] = 0x21A7,      // ↧
  [injection] = 0x21A3,         // ↣
  [surjection] = 0x21A0,        // ↠
  [bijection] = 0x2916,         // ⤖
  [monomorphism] = 0x21AA,      // ↪
  [epimorphism] = 0x21FE,       // ⇾
  [retraction] = 0x2B8E,        // ⮎
  [section] = 0x2B8C,           // ⮌
  [leftupharpoon] = 0x21BC,     // ↼
  [rightupharpoon] = 0x21C0,    // ⇀ 
  [uprightharpoon] = 0x21BE,    // ↾
  [downrightharpoon] = 0x21C2,  // ⇂

  //REL
  [llt] = 0x226A,
  [ggt] = 0x226B,
  [lllt] = 0x22D8,
  [gggt] = 0x22D9,
  [ltdot] = 0x22D6,
  [gtdot] = 0x22D7,
  [leq] = 0x2264,
  [geq] = 0x2265,
  [normalsubgroup] = 0x22B2,
  [containsnormalsubgroup] = 0x22B3,
  [normalsubgroupeq] = 0x22B4,
  [containsnormalsubgroupeq] = 0x22B5,
  [prec] = 0x227A,
  [succ] = 0x227B,
  [preceq] = 0x227C,
  [succeq] = 0x227D,
  
  [propto] = 0x221D,
  [oeq] = 0x2257,
  [andeq] = 0x2259,
  [oreq] = 0x225A,
  [tildetildeeq] = 0x224A,
  [tilde] = 0x223C,
  [tildeq] = 0x2243,
  [tildeqq] = 0x2245,
  [approx] = 0x2248,
  [tripletilde] = 0x224B,
  [tripleeq] = 0x2261,
  [quadeq] = 0x2263,
  [coloneq] = 0x2254,
  [eqcolon] = 0x2255,
  [defeq] = 0x225D,
  [doteq] = 0x2250,
  [stareq] = 0x225B,
  [deltaeq] = 0x225C,
  [questioneq] = 0x225F,

  //CALC
  [integral] = 0x222B,
  [iint] = 0x222C,
  [iiint] = 0x222D,
  [iiiint] = 0x2A0C,
  [intcirc] = 0x222E,
  [iintcirc] = 0x222F,
  [iiintcirc] = 0x2230,
  [intcircdot] = 0x2A15,
  [clockwiseint] = 0x2231,
  [anticlockwiseint] = 0x2A11,
  [clockwisecontourint] = 0x2232,
  [anticlockwisecontourint] = 0x2233,
  [upperint] = 0x2A1B,
  [lowerint] = 0x2A1C,
  [barint] = 0x2A0D,
  [barbarint] = 0x2A0E,
  [intersectint] = 0x2A19,
  [unionint] = 0x2A1A,
  [slashint] = 0x2A0F,
  [cint] = 0x2A10,

  [partiald] = 0x2202,
  [increment] = 0x2206,
  [nabla] = 0x2207,
  [langlebracket] = 0x2329,
  [ranglebracket] = 0x232A,
  [prime] = 0x2032,
  [doubleprime] = 0x2033,
  [tripleprime] = 0x2034,
  [dagger] = 0x2020,
  [doubledagger] = 0x2021,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Basic layer
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |   `    |   1  |   2  |   3  |   4  |   5  | Hypr |           | Meh  |   6  |   7  |   8  |   9  |   0  |   -    |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * | Tab    |   Q  |   W  |   E  |   R  |   T  | LAYR |           | LAYR |   Y  |   U  |   I  |   O  |   P  |   \    |
 * |--------+------+------+------+------+------|      |           | OS   |------+------+------+------+------+--------|
 * | Caps   |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  |   ;  |   '    |
 * |--------+------+------+------+------+------| GRK  |           | ARR  |------+------+------+------+------+--------|
 * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  |   ,  |   .  |   /  | RShift |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |LCtrl |  ~L1 | LAlt | Left | Right|                                       |  Up  | Down |   [  |   ]  | RCtrl|
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        | Del  | LGui |       | Esc  |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      | Home |       | PgUp |        |      |
 *                                 | Space|Backsp|------|       |------|  Tab   |Enter |
 *                                 |      |ace   | End  |       | PgDn |        |      |
 *                                 `--------------------'       `----------------------'
 */
// If it accepts an argument (i.e, is a function), it doesn't need KC_.
// Otherwise, it needs KC_*
[BASE] = LAYOUT_ergodox(  // layer 0 : default
        // left hand
        KC_GRV,         KC_1,         KC_2,   KC_3,   KC_4,   KC_5,   ALL_T(KC_NO),
        KC_TAB,         KC_Q,         KC_W,   KC_E,   KC_R,   KC_T,   OSL(LAYR),
        KC_CAPS,        KC_A,         KC_S,   KC_D,   KC_F,   KC_G,
        KC_LSFT,        KC_Z,         KC_X,   KC_C,   KC_V,   KC_B,   OSL(GRK),
        KC_LCTRL,       MO(SYMB),     KC_LALT,KC_LEFT,KC_RGHT,
                                               KC_DEL,        KC_LGUI,
                                                              KC_HOME,
                                               KC_SPC,KC_BSPC,KC_END,
        // right hand
             MEH_T(KC_NO),        KC_6,   KC_7,  KC_8,   KC_9,   KC_0,             KC_MINS,
             OSL(LAYRONESHOT),    KC_Y,   KC_U,  KC_I,   KC_O,   KC_P,             KC_NUBS,
                                  KC_H,   KC_J,  KC_K,   KC_L,   KC_SCLN,          KC_QUOT,
             OSL(ARR),            KC_N,   KC_M,  KC_COMM,KC_DOT, KC_SLSH,          KC_RSFT,
                                  KC_UP, KC_DOWN,KC_LBRC,  KC_RBRC,          KC_RCTL,
             KC_ESC,        KC_NO,
             KC_PGUP,
             KC_PGDN,KC_TAB, KC_ENT
    ),
/* Keymap 1: Symbol Layer
 *
 * ,---------------------------------------------------.           ,--------------------------------------------------.
 * |Version  |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
 * |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+--------|
 * |         |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |   /    |
 * |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |         |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   -  |   \    |
 * `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   | EPRM  |      |      |      |      |                                       |  000 |   0  |   .  |   =  |      |
 *   `-----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+--------+------.
 *                                 |      |      |      |       |      |        |      |
 *                                 |      |      |------|       |------|        |      |
 *                                 |      |      |      |       |      |        |      |
 *                                 `--------------------'       `----------------------'
 */
// SYMBOLS
[SYMB] = LAYOUT_ergodox(
       // left hand
       VRSN,   KC_F1,  KC_F2,       KC_F3,  KC_F4,  KC_F5,  KC_TRNS,
       KC_TRNS,KC_EXLM,S(KC_QUOT),  KC_LCBR,KC_RCBR,KC_PIPE,KC_TRNS,
       KC_TRNS,KC_NUHS,KC_DLR,      KC_LPRN,KC_RPRN,KC_GRV,
       KC_TRNS,KC_PERC,KC_CIRC,     KC_LBRC,KC_RBRC,KC_TILD,KC_TRNS,
          EPRM,KC_TRNS,KC_TRNS,     KC_TRNS,KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
       // right hand
       KC_TRNS, KC_F6,   KC_F7,       KC_F8,   KC_F9,   KC_F10,  KC_F11,
       KC_TRNS, KC_UP,   KC_7,        KC_8,    KC_9,    KC_PAST, KC_F12,
                KC_DOWN, KC_4,        KC_5,    KC_6,    KC_PPLS, KC_PSLS,
       KC_TRNS, KC_AMPR, KC_1,        KC_2,    KC_3,    KC_PMNS, KC_NUBS,
                         TRIPLE_ZERO, KC_0,    KC_DOT,  KC_EQL,  KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
),
/* Keymap 2: Layer switch
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        | QWER |      |      | REL  |      | QWER |           | QWER |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        | ARR  |      |      |      | GRK  |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      | CALC |      | BBB  |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
// LAYER SWITCH
[LAYR] = LAYOUT_ergodox(
       UC_M_WC,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
       UC_M_WI, TO(BASE), KC_NO, KC_NO, TO(REL), KC_NO,   TO(BASE),
       UC_M_LN, TO(ARR),  KC_NO, KC_NO, KC_NO, TO(GRK),
       KC_NO,   KC_NO,    KC_NO, TO(CALC), KC_NO, TO(BBB),   KC_NO,
       KC_NO,   KC_NO,    KC_NO, KC_NO, KC_NO,
                                           KC_NO, KC_NO,
                                                  KC_NO,
                                    KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       TO(BASE),  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_NO, KC_NO
),
[LAYRONESHOT] = LAYOUT_ergodox(
       UC_M_WC,   KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
       UC_M_WI, TO(BASE), KC_NO, KC_NO, OSL(REL), KC_NO,   TO(BASE),
       UC_M_LN, OSL(ARR), KC_NO, KC_NO, KC_NO, OSL(GRK),
       KC_NO,   KC_NO,    KC_NO, OSL(CALC), KC_NO, OSL(BBB),   KC_NO,
       KC_NO,   KC_NO,    KC_NO, KC_NO, KC_NO,
                                           KC_NO, KC_NO,
                                                  KC_NO,
                                    KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       TO(BASE),  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                  KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                          KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_NO, KC_NO
),
/* Keymap: Empty
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[EMPTY] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,      KC_NO,    KC_NO,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,      KC_NO,    KC_NO,     KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,
             KC_TRNS,     KC_NO,      KC_NO,    KC_NO,      KC_NO,       KC_NO,          KC_TRNS,
                          KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,          KC_TRNS,
             KC_TRNS,     KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap 3: Greek
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |   ⅰ  |   ⅱ  |   ⅲ  |   ⅳ  |   ⅴ  |      |           |      |   ⅵ  |  ⅶ  |  ⅷ |  ⅸ   |   ⅹ  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   θ  |   ω  |   ε  |   ρ  |   τ  |      |           |      |   ψ  |   υ  |   ι  |   ο  |   π  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   α  |   σ  |   δ  |   φ  |   γ  |------|           |------|   η  |   ϑ  |   κ  |   λ  |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   ζ  |   ξ  |   χ  |   ς  |   β  |      |           |      |   ν  |   μ  |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[GRK] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         XP(rone, Rone),       XP(rtwo, Rtwo), XP(rthree, Rthree),  XP(rfour, Rfour), XP(rfive, Rfive),  KC_TRNS,
        KC_TRNS,         XP(gq, Gq),         XP(gw, Gw),   XP(ge, Ge),      XP(gr, Gr),    XP(gt, Gt),     KC_TRNS,
        KC_TRNS,       XP(ga, Ga),         XP(gs, Gs),   XP(gd, Gd),      XP(gf, Gf),    XP(gg, Gg),
        KC_TRNS,       XP(gz, Gz),         XP(gx, Gx),   XP(gc, Gc),      XP(gv, Gv),    XP(gb, Gb),     KC_TRNS,
        KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     XP(rsix, Rsix),   XP(rseven, Rseven),  XP(reight, Reight),   XP(rnine, Rnine),   XP(rten, Rten),             KC_TRNS,
             KC_TRNS,    XP(gy,Gy),   XP(gu,Gu),  XP(gi,Gi),   XP(go,Go),   XP(gp,Gp),             KC_TRNS,
                          XP(gh,Gh),   XP(gj,Gj),  XP(gk,Gk),   XP(gl,Gl),   KC_TRNS,          KC_TRNS,
             KC_TRNS,     XP(gn,Gn),   XP(gm,Gm),  KC_TRNS,KC_TRNS, KC_TRNS,          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap 4: Arrows
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |  ⤖  |   ↪  |      |           |      |  ⇾  |  ⇐  |  ⇒  |  ⇑   |  ⇓   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |  ↼   |  ⇀  |   ⇂  |  ↣  |  ↣   |------|           |------|  ↠  |  ←   |  →   |   ↑  |   ↓  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |  ⮌  |      |           |      |  ⮎  |  ↤   |  ↦  |   ↥  |  ↧   |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[ARR] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,    X(bijection),    X(monomorphism),     KC_TRNS,
        KC_TRNS,       X(leftupharpoon),         X(rightupharpoon),   X(uprightharpoon),      X(downrightharpoon),    X(injection),
        KC_TRNS,       KC_NO,         KC_NO,   KC_NO,      KC_NO,    X(section),     KC_TRNS,
        KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_TRNS,   KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,             KC_TRNS,
             KC_TRNS,    X(epimorphism),   X(Leftarrow),  X(Rightarrow),   X(Uparrow),   X(Downarrow),             KC_TRNS,
                          X(surjection),   X(leftarrow),  X(rightarrow),   X(uparrow),   X(downarrow),          KC_TRNS,
             KC_TRNS,     X(retraction),   X(barleftarrow), X(barrightarrow),X(baruparrow), X(bardownarrow),          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap 5: Blackboard bold
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |   𝟙  |   𝟚  |   𝟛  |   𝟜  |   𝟝  |      |           |      |  𝟞   |   𝟟  |  𝟠   |   𝟡  |   𝟘  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   𝕢  |  𝕨  |   𝕖  |   𝕣   |  𝕥   |      |          |      |  𝕪   |   𝕦  |   𝕚  |  𝕠   |   𝕡  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   𝕒  |  𝕤   |   𝕕  |  𝕗   |   𝕘  |------|           |------|   𝕙  |   𝕛  |   𝕜  |  𝕝    |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   𝕫  |  𝕩   |   𝕔  |   𝕧  |  𝕓   |      |           |      |   𝕟  |  𝕞  |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[BBB] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         X(b1),      X(b2), X(b3),  X(b4), X(b5),  KC_TRNS,
        KC_TRNS,         XP(bq, bQ),         XP(bw, bW),   XP(be, bE),      XP(br, bR),    XP(bt, bT),     KC_TRNS,
        KC_TRNS,       XP(ba, bA),         XP(bs, bS),   XP(bd, bD),      XP(bf, bF),    XP(bg, bG),
        KC_TRNS,       XP(bz, bZ),         XP(bx, bX),   XP(bc, bC),      XP(bv, bV),    XP(bb, bB),     KC_TRNS,
        KC_TRNS,       KC_TRNS,      KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     X(b6),   X(b7),  X(b8),   X(b9),   X(b0),             KC_TRNS,
             KC_TRNS,    XP(by,bY),   XP(bu,bU),  XP(bi,bI),   XP(bo,bO),   XP(bp,bP),             KC_TRNS,
                          XP(bh,bH),   XP(bj,bJ),  XP(bk,bK),   XP(bl,bL),   KC_TRNS,          KC_TRNS,
             KC_TRNS,     XP(bn,bN),   XP(bm,bM),  KC_TRNS,KC_TRNS, KC_TRNS,          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap: Logic
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[LOGIC] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,      KC_NO,    KC_NO,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,      KC_NO,    KC_NO,     KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,
             KC_TRNS,     KC_NO,      KC_NO,    KC_NO,      KC_NO,       KC_NO,          KC_TRNS,
                          KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,          KC_TRNS,
             KC_TRNS,     KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap: Relations
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |   ∝  |   ≗  |   ≙ |   ≚  |   ≊  |      |           |      |      |  ≪  |  ≫  |  ⋘  |   ⋙ |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   ∼  |  ≃   |  ≅  |   ≈  |  ≋   |      |           |      |      |   ⊲  |   ⊳ |   ⊴  |   ⊵  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   =  |   ≡  |   ≣  |   ≔ |   ≕ |------|           |------|      |    ⋖ |  ⋗   |  ≤   |  ≥   |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   ≝  |  ≐   |  ≛  |   ≜  |  ≟  |      |           |      |      |    ≺ |  ≻   |  ≼  |  ≽   |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[REL] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         X(propto),       X(oeq), X(andeq),  X(oreq), X(tildetildeeq),  KC_TRNS,
        KC_TRNS,         X(tilde),         X(tildeq),   X(tildeqq),    X(approx),    X(tripletilde),     KC_TRNS,
        KC_TRNS,         KC_EQL,         X(tripleeq),   X(quadeq),      X(coloneq),    X(eqcolon),
        KC_TRNS,         X(defeq),         X(doteq),   X(stareq),      X(deltaeq),    X(questioneq),     KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_NO,    X(llt),    X(ggt),  X(lllt),    X(gggt),         KC_TRNS,
             KC_TRNS,     KC_NO,      X(normalsubgroup),    X(containsnormalsubgroup),      X(normalsubgroupeq),       X(containsnormalsubgroupeq),          KC_TRNS,
                          KC_NO,      X(ltdot),    X(gtdot),      X(leq),      X(geq),          KC_TRNS,
             KC_TRNS,     KC_NO,      X(prec),    X(succ),      X(preceq),      X(succeq),          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap: Calculus
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |   ⨐  |  ∱   |  ⨑   |  ∲   |   ∳  |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |   ′  |   ″  |   ‴  |      |      |      |           |      |   ⨏  |   ∮  |  ∯  |  ∰  |   ⨕  |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   ∆  |   ∇  |   ∂  |      |      |------|           |------|   ⨎  |   ∫  |  ∬   |  ∬  |  ∭ |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |   〈  |   〉   |   †  |   ‡  |      |      |           |      |   ⨍  |   ⨛  |   ⨜  |   ⨙  |  ⨚  |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[CALC] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,         X(prime),         X(doubleprime),   X(tripleprime),    KC_NO,    KC_NO,     KC_TRNS,
        KC_TRNS,         X(increment),   X(nabla),      X(partiald),   KC_NO,    KC_NO,
        KC_TRNS,         X(langlebracket),         X(ranglebracket),   X(dagger),      X(doubledagger),    KC_NO,     KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     X(cint),    X(clockwiseint),  X(anticlockwiseint),    X(clockwisecontourint),    X(anticlockwisecontourint),        KC_TRNS,
             KC_TRNS,     X(slashint),      X(intcirc),    X(iintcirc),      X(iiintcirc),       X(intcircdot),          KC_TRNS,
                          X(barbarint),      X(integral),    X(iint),      X(iiint),      X(iiiint),          KC_TRNS,
             KC_TRNS,     X(barint),      X(upperint),    X(lowerint),      X(intersectint),      X(unionint),          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap: Set
 *
 * ,--------------------------------------------------.           ,--------------------------------------------------.
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |------|           |------|      |      |      |      |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
 *   |      |      |      |      |      |                                       |      |      |      |      |      |
 *   `----------------------------------'                                       `----------------------------------'
 *                                        ,-------------.       ,-------------.
 *                                        |      |      |       |      |      |
 *                                 ,------|------|------|       |------+------+------.
 *                                 |      |      |      |       |      |      |      |
 *                                 |      |      |------|       |------|      |      |
 *                                 |      |      |      |       |      |      |      |
 *                                 `--------------------'       `--------------------'
 */
[SET] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,      KC_NO,    KC_NO,
        KC_TRNS,         KC_NO,         KC_NO,   KC_NO,      KC_NO,    KC_NO,     KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS, KC_TRNS,    KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,
             KC_TRNS,     KC_NO,      KC_NO,    KC_NO,      KC_NO,       KC_NO,          KC_TRNS,
                          KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,          KC_TRNS,
             KC_TRNS,     KC_NO,      KC_NO,    KC_NO,      KC_NO,      KC_NO,          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // dynamically generate these.
    case EPRM:
      if (record->event.pressed) {
        eeconfig_init();
      }
      return false;
      break;
    case VRSN:
      if (record->event.pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
      break;
    case RGB_SLD:
      if (record->event.pressed) {
        #ifdef RGBLIGHT_ENABLE
          rgblight_mode(1);
        #endif
      }
      return false;
      break;
    case TRIPLE_ZERO: {
      if (record->event.pressed) {
          SEND_STRING("000"); // REPLACE with what you want your macro to be
          return false;
      }
    }
  }
  #ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
  #endif 
  return true;
}

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
      // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }

};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  //debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

