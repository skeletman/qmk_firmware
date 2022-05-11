#include QMK_KEYBOARD_H
#include "version.h"
#undef XP
#define XP(i,j) (QK_UNICODEMAP_PAIR | ((i)&0x7FFF))


enum layer_names {
  BASE,
  SYMB,
  LAYR,
  LAYRONESHOT,
  EMPTY,
  GRK,
  ARR,
  BBB,
  FRAK,
  SCPT,
  LOGIC,
  REL,
  CALC,
  SET,
  OP
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
	Rone,  // 1:: Ⅰ

	rtwo,
	Rtwo,  // 2:: Ⅱ

	rthree,
	Rthree,  // 3:: Ⅲ

	rfour,  // 4:: ⅳ
	Rfour,  // 4:: Ⅳ

	rfive,  // 5:: ⅴ
	Rfive,  // 5:: Ⅴ

	rsix,  // 6:: ⅵ
	Rsix,  // 6:: Ⅵ

	rseven,  // 7:: ⅶ
	Rseven,  // 7:: Ⅶ

	reight,  // 8:: ⅷ
	Reight,  // 8:: Ⅷ

	rnine,  // 9:: ⅸ
	Rnine,  // 9:: Ⅸ

	rten,  // 0:: ⅹ
  Rten,

	gq,  // q:: θ
	Gq,  // Q:: Θ

	gw,  // w:: ω
	Gw,  // W:: Ω

	ge,  // e:: ε
	Ge,  // E:: Ε

	gr,  // r:: ρ
	Gr,  // R:: Ρ

	gt,  // t:: τ
	Gt,  // T:: Τ

	gy,  // y:: ψ
	Gy,  // Y:: Ψ

	gu,  // u:: υ 
	Gu,  // U:: Υ

	gi,  // i:: ι
	Gi,  // I:: Ι

	go,  // o:: ο
	Go,  // O:: Ο

	gp,  // p:: π
	Gp,  // P:: Π

	ga,  // a:: α
	Ga,  // A:: Α

	gs,  // s:: σ
	Gs,  // S:: Σ

	gd,  // d:: δ
	Gd,  // D:: Δ

	gf,  // f:: φ
	Gf,  // F:: Φ

	gg,  // g:: γ
	Gg,  // G:: Γ

	gh,  // h:: η
	Gh,  // H:: Η

	gj,  // j:: ϑ
	Gj,  // J:: J

	gk,  // k:: κ
	Gk,  // K:: Κ

	gl,  // l:: λ
	Gl,  // L:: Λ

	gz,  // z:: ζ
	Gz,  // Z:: Ζ

	gx,  // x:: ξ
	Gx,  // X:: Ξ

	gc,  // c:: χ
	Gc,  // C:: Χ

	gv,  // v:: ς
	Gv,  // V:: V

	gb,  // b:: β
	Gb,  // B:: Β

	gn,  // n:: ν
	Gn,  // N:: Ν

	gm,  // m:: μ
	Gm,  // M:: Μ

  //BL
  bq,
  bQ,

  bw,
  bW,

  be,
  bE,

  br,
  bR,

  bt,
  bT,

  by,
  bY,

  bu,
  bU,

  bi,
  bI,

  bo,
  bO,

  bp,
  bP,

  ba,
  bA,

  bs,
  bS,

  bd,
  bD,

  bf,
  bF,

  bg,
  bG,

  bh,
  bH,

  bj,
  bJ,

  bk,
  bK,

  bl,
  bL,

  bz,
  bZ,

  bx,
  bX,

  bc,
  bC,

  bv,
  bV,

  bb,
  bB,

  bn,
  bN,

  bm,
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

  //OP
  plusminus, //U+00B1
  minusplus, //U+2213
  plus, //U+002B
  minus, //U+2212
  times, //U+00D7
  divide, //U+00F7
  oplus, //U+2295
  ominus, //U+2296
  otimes, //U+2297
  odivide, //U+2298
  sqplus, //U+229E
  sqminus, //U+229F
  sqtimes, //U+22A0
  sqdot, //U+22A1
  dotplus, //U+2214
  dotminus, //U+2238

  asterisk, //U+2217
  ringop, //U+2218
  bulletop, //U+2219
  cdot, //U+00B7
  oasterisk, //U+229B
  oring, //U+229A
  odot, //U+2299
  diamondop, //U+22C4
  star, //U+22C6
  nsum, //U+2211
  nprod, //U+220F
  ncoprod, //U+2210
  coprod, //U+2A3F
  wreath, //U+2240
  notdivide, //U+2224
  infty, //U+221E

  nodot, //U+2A00
  noplus, //U+2A01
  notimes, //U+2A02
  ntimes, //U+2A09
  udot, //U+228D
  uplus, //U+228E
  nudot, //U+2A03
  nuplus, //U+2A04

  //FRAK
  frakq,
  Frakq,

  frakw,
  Frakw,

  frake,
  Frake,
  
  frakr,
  Frakr,
  
  frakt,
  Frakt,
  
  fraky,
  Fraky,

  fraku,
  Fraku,
  
  fraki,
  Fraki,

  frako,
  Frako,

  frakp,
  Frakp,

  fraka,
  Fraka,

  fraks,
  Fraks,

  frakd,
  Frakd,

  frakf,
  Frakf,

  frakg,
  Frakg,

  frakh,
  Frakh,

  frakj,
  Frakj,

  frakk,
  Frakk,

  frakl,
  Frakl,

  frakz,
  Frakz,

  frakx,
  Frakx,

  frakc,
  Frakc,

  frakv,
  Frakv,
  
  frakb,
  Frakb,

  frakn,
  Frakn,

  frakm,
  Frakm,

  //SCPT
  scpta,
  Scpta,

  scptb,
  Scptb,

  scptc,
  Scptc,

  scptd,
  Scptd,

  scpte,
  Scpte,

  scptf,
  Scptf,

  scptg,
  Scptg,

  scpth,
  Scpth,

  scpti,
  Scpti,

  scptj,
  Scptj,

  scptk,
  Scptk,

  scptl,
  Scptl,

  scptm,
  Scptm,

  scptn,
  Scptn,

  scpto,
  Scpto,

  scptp,
  Scptp,

  scptq,
  Scptq,

  scptr,
  Scptr,

  scpts,
  Scpts,

  scptt,
  Scptt,

  scptu,
  Scptu,

  scptv,
  Scptv,

  scptw,
  Scptw,

  scptx,
  Scptx,

  scpty,
  Scpty,

  scptz,
  Scptz,
  
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

  //OP
  [plusminus] = 0x00B1,
  [minusplus] = 0x2213,
  [plus] = 0x002B,
  [minus] = 0x2212,
  [times] = 0x00D7,
  [divide] = 0x00F7,
  [oplus] = 0x2295,
  [ominus] = 0x2296,
  [otimes] = 0x2297,
  [odivide] = 0x2298,
  [sqplus] = 0x229E,
  [sqminus] = 0x229F,
  [sqtimes] = 0x22A0,
  [sqdot] = 0x22A1,
  [dotplus] = 0x2214,
  [dotminus] = 0x2238,

  [asterisk] = 0x2217,
  [ringop] = 0x2218,
  [bulletop] = 0x2219,
  [cdot] = 0x00B7,
  [oasterisk] = 0x229B,
  [oring] = 0x229A,
  [odot] = 0x2299,
  [diamondop] = 0x22C4,
  [star] = 0x22C6,
  [nsum] = 0x2211,
  [nprod] = 0x220F,
  [ncoprod] = 0x2210,
  [coprod] = 0x2A3F,
  [wreath] = 0x2240,
  [notdivide] = 0x2224,
  [infty] = 0x221E,

  [odot] = 0x2A00,
  [noplus] = 0x2A01,
  [notimes] = 0x2A02,
  [ntimes] = 0x2A09,
  [udot] = 0x228D,
  [uplus] = 0x228E,
  [nudot] = 0x2A03,
  [nuplus] = 0x2A04,

  //FRAK
  [Frakq] = 0x1D514,
  [Frakw] = 0x1D51A,
  [Frake] = 0x1D508,
  [Frakr] = 0x211C,
  [Frakt] = 0x1D517,
  [Fraky] = 0x1D51C,
  [Fraku] = 0x1D518,
  [Fraki] = 0x2111,
  [Frako] = 0x1D512,
  [Frakp] = 0x1D513,
  [Fraka] = 0x1D504,
  [Fraks] = 0x1D516,
  [Frakd] = 0x1D507,
  [Frakf] = 0x1D509,
  [Frakg] = 0x1D50A,
  [Frakh] = 0x210C,
  [Frakj] = 0x1D50D,
  [Frakk] = 0x1D50E,
  [Frakl] = 0x1D50F,
  [Frakz] = 0x2128,
  [Frakx] = 0x1D51B,
  [Frakc] = 0x212D,
  [Frakv] = 0x1D519,
  [Frakb] = 0x1D505,
  [Frakn] = 0x1D511,
  [Frakm] = 0x1D510,

  [frakq] = 0x1D52E,
  [frakw] = 0x1D534,
  [frake] = 0x1D522,
  [frakr] = 0x1D52F,
  [frakt] = 0x1D531,
  [fraky] = 0x1D536,
  [fraku] = 0x1D532,
  [fraki] = 0x1D526,
  [frako] = 0x1D52C,
  [frakp] = 0x1D52D,
  [fraka] = 0x1D51E,
  [fraks] = 0x1D530,
  [frakd] = 0x1D521,
  [frakf] = 0x1D523,
  [frakg] = 0x1D524,
  [frakh] = 0x1D525,
  [frakj] = 0x1D527,
  [frakk] = 0x1D528,
  [frakl] = 0x1D529,
  [frakz] = 0x1D537,
  [frakx] = 0x1D535,
  [frakc] = 0x1D520,
  [frakv] = 0x1D533,
  [frakb] = 0x1D51F,
  [frakn] = 0x1D52B,
  [frakm] = 0x1D52A,


  [scpta] = 0x1D4B6,
  [Scpta] = 0x1D49C,

  [scptb] = 0x1D4B7,
  [Scptb] = 0x212C,

  [scptc] = 0x1D4B8,
  [Scptc] = 0x1D49E,

  [scptd] = 0x1D4B9,
  [Scptd] = 0x1D49F,

  [scpte] = 0x212F,
  [Scpte] = 0x2130,

  [scptf] = 0x1D4BB,
  [Scptf] = 0x2131,

  [scptg] = 0x210A,
  [Scptg] = 0x1D4A2,

  [scpth] = 0x1D4BD,
  [Scpth] = 0x210B,

  [scpti] = 0x1D4BE,
  [Scpti] = 0x2110,

  [scptj] = 0x1D4BF,
  [Scptj] = 0x1D4A5,

  [scptk] = 0x1D4C0,
  [Scptk] = 0x1D4A6,

  [scptl] = 0x2113,
  [Scptl] = 0x2112,

  [scptm] = 0x1D4C2,
  [Scptm] = 0x2133,

  [scptn] = 0x1D4C3,
  [Scptn] = 0x1D4A9,

  [scpto] = 0x2134,
  [Scpto] = 0x1D4AA,

  [scptp] = 0x1D4C5,
  [Scptp] = 0x2118,

  [scptq] = 0x1D4C6,
  [Scptq] = 0x1D4AC,

  [scptr] = 0x1D4C7,
  [Scptr] = 0x211B,

  [scpts] = 0x1D4C8,
  [Scpts] = 0x1D4AE,

  [scptt] = 0x1D4C9,
  [Scptt] = 0x1D4AF,

  [scptu] = 0x1D4CA,
  [Scptu] = 0x1D4B0,

  [scptv] = 0x1D4CB,
  [Scptv] = 0x1D4B1,

  [scptw] = 0x1D4CC,
  [Scptw] = 0x1D4B2,

  [scptx] = 0x1D4CD,
  [Scptx] = 0x1D4B3,

  [scpty] = 0x1D4CE,
  [Scpty] = 0x1D4B4,

  [scptz] = 0x1D4CF,
  [Scptz] = 0x1D4B5,
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
 * |        |  OP  |      |      |      |      |      |           |      |      |      |      |      |      |        |
 * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
 * |        | QWER |      |      | REL  |      | QWER |           | QWER |      |      |      |  OP  |      |        |
 * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
 * |        | ARR  | SCPT |      | FRAK | GRK  |------|           |------|      |      |      |      |      |        |
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
       UC_M_WC, TO(OP),   KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
       UC_M_WI, TO(BASE), KC_NO, KC_NO, TO(REL), KC_NO,   TO(BASE),
       UC_M_LN, TO(ARR),  TO(SCPT), KC_NO, TO(FRAK), TO(GRK),
       KC_NO,   KC_NO,    KC_NO, TO(CALC), KC_NO, TO(BBB),   KC_NO,
       KC_NO,   KC_NO,    KC_NO, KC_NO, KC_NO,
                                           KC_NO, KC_NO,
                                                  KC_NO,
                                    KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,
       TO(BASE),  KC_NO,  KC_NO, KC_NO, TO(OP), KC_NO, KC_NO,
                  KC_NO,  KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,
                          KC_NO, KC_NO, KC_NO,  KC_NO, KC_NO,
       KC_NO, KC_NO,
       KC_NO,
       KC_NO, KC_NO, KC_NO
),
[LAYRONESHOT] = LAYOUT_ergodox(
       UC_M_WC, OSL(OP),  KC_NO, KC_NO, KC_NO, KC_NO,   KC_NO,
       UC_M_WI, TO(BASE), KC_NO, KC_NO, OSL(REL), KC_NO,   TO(BASE),
       UC_M_LN, OSL(ARR), OSL(SCPT), KC_NO, OSL(FRAK), OSL(GRK),
       KC_NO,   KC_NO,    KC_NO, OSL(CALC), KC_NO, OSL(BBB),   KC_NO,
       KC_NO,   KC_NO,    KC_NO, KC_NO, KC_NO,
                                           KC_NO, KC_NO,
                                                  KC_NO,
                                    KC_NO, KC_NO, KC_NO,
    // right hand
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO,
       TO(BASE),  KC_NO,  KC_NO, KC_NO, OSL(OP),  KC_NO, KC_NO,
                  KC_NO,  KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO,
       KC_NO,     KC_NO,  KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO,
                          KC_NO, KC_NO, KC_NO,    KC_NO, KC_NO,
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
        KC_TRNS,         KC_TRNS,       KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,    KC_NO,       KC_NO,    KC_NO,      KC_TRNS,
        KC_TRNS,         KC_NO,         KC_NO,    KC_NO,       KC_NO,    KC_NO,
        KC_TRNS,         KC_NO,         KC_NO,    KC_NO,       KC_NO,    KC_NO,      KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS,  KC_TRNS,     KC_TRNS,
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
/* Keymap: Frak
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
[FRAK] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         KC_TRNS,       KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,
        KC_TRNS,         XP(frakq,0),         XP(frakw,0),    XP(frake,0),       XP(frakr,0),    XP(frakt,0),      KC_TRNS,
        KC_TRNS,         XP(fraka,0),         XP(fraks,0),    XP(frakd,0),       XP(frakf,0),    XP(frakg,0),
        KC_TRNS,         XP(frakz,0),         XP(frakx,0),    XP(frakc,0),       XP(frakv,0),    XP(frakb,0),      KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS,  KC_TRNS,     KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,
             KC_TRNS,     XP(fraky,0),      XP(fraku,0),    XP(fraki,0),      XP(frako,0),       XP(frakp,0),          KC_TRNS,
                          XP(frakh,0),      XP(frakj,0),    XP(frakk,0),      XP(frakl,0),      KC_TRNS,          KC_TRNS,
             KC_TRNS,     XP(frakn,0),      XP(frakm,0),    KC_TRNS,      KC_TRNS,      KC_TRNS,          KC_TRNS,
                                  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS,          KC_TRNS,
             KC_TRNS,        KC_TRNS,
             KC_TRNS,
             KC_TRNS,KC_TRNS, KC_TRNS
    ),
/* Keymap: Script
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
[SCPT] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         KC_TRNS,       KC_TRNS,  KC_TRNS,     KC_TRNS,  KC_TRNS,    KC_TRNS,
        KC_TRNS,         XP(scptq,0),         XP(scptw,0),    XP(scpte,0),       XP(scptr,0),    XP(scptt,0),      KC_TRNS,
        KC_TRNS,         XP(scpta,0),         XP(scpts,0),    XP(scptd,0),       XP(scptf,0),    XP(scptg,0),
        KC_TRNS,         XP(scptz,0),         XP(scptx,0),    XP(scptc,0),       XP(scptv,0),    XP(scptb,0),      KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS,  KC_TRNS,     KC_TRNS,
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_TRNS,    KC_TRNS,  KC_TRNS,    KC_TRNS,    KC_TRNS,        KC_TRNS,
             KC_TRNS,     XP(scpty,0),      XP(scptu,0),    XP(scpti,0),      XP(scpto,0),       XP(scptp,0),          KC_TRNS,
                          XP(scpth,0),      XP(scptj,0),    XP(scptk,0),      XP(scptl,0),      KC_TRNS,          KC_TRNS,
             KC_TRNS,     XP(scptn,0),      XP(scptm,0),    KC_TRNS,      KC_TRNS,      KC_TRNS,          KC_TRNS,
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
/* Keymap: Operators
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
[OP] = LAYOUT_ergodox( 
        // left hand
        KC_TRNS,         X(nuplus),     X(nudot),       KC_NO,        X(nodot),   X(minusplus),     KC_TRNS,
        KC_TRNS,         X(uplus),      X(udot),        X(oring),     X(odot),    X(plusminus),     KC_TRNS,
        KC_TRNS,         X(diamondop),  X(star),        X(ringop),    X(cdot),    X(bulletop),
        KC_TRNS,         X(asterisk),   X(oasterisk),   X(wreath),    X(sqdot),   KC_NO,            KC_TRNS,
        KC_TRNS,         KC_TRNS,       KC_TRNS,        KC_TRNS,      KC_TRNS, 
                                               KC_TRNS,        KC_TRNS,
                                                              KC_TRNS,
                                               KC_TRNS,KC_TRNS,KC_TRNS,
        // right hand
             KC_TRNS,     KC_NO,        X(noplus),    KC_NO,          X(notimes),     KC_NO,        KC_TRNS,
             KC_TRNS,     KC_NO,        X(oplus),     X(ominus),      X(otimes),      X(odivide),   KC_TRNS,
                          X(coprod),    X(plus),      X(minus),       X(times),       X(divide),    KC_TRNS,
             KC_TRNS,     X(ncoprod),   X(nsum),      KC_NO,          X(nprod),       X(ntimes),    KC_TRNS,
                                        KC_TRNS,      KC_TRNS,        KC_TRNS,        KC_TRNS,      KC_TRNS,
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

uint16_t unicodemap_index(uint16_t keycode) {
  if (keycode >= QK_UNICODEMAP_PAIR) {
    // Keycode is a pair: extract index based on Shift / Caps Lock state
    uint16_t index = keycode - QK_UNICODEMAP_PAIR;

    bool shift = get_mods() & MOD_MASK_SHIFT, caps = IS_HOST_LED_ON(USB_LED_CAPS_LOCK);
    if (shift ^ caps) { index += 1; }

    return index & 0x7FFF;
  } else {
    // Keycode is a regular index
    return keycode - QK_UNICODEMAP;
  }
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  //debug_enable=true;
  //debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}

