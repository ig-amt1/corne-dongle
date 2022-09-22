/* Copyright 2022 Marcos Ivan Chow Castro
 * Inspired by Stephen Bösebeck
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// #pragma once

#define XXX &none
#define ___ &trans

// Apple "Globe" key
// https://github.com/zmkfirmware/zmk/issues/947
// #define GLOBE CAPSLOCK

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ^ │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ß │ ´ │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │ Q │ W │ E │ R │ T │ Z │ U │ I │ O │ P │ Ü │ + │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ # │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ < │ Y │ X │ C │ V │ B │ N │ M │ , │ . │ - │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
// #define DE_CIRC &kp GRAVE // ^ (dead)
#define DE_1 &kp N1       // 1
#define DE_2 &kp N2       // 2
#define DE_3 &kp N3       // 3
#define DE_4 &kp N4       // 4
#define DE_5 &kp N5       // 5
#define DE_6 &kp N6       // 6
#define DE_7 &kp N7       // 7
#define DE_8 &kp N8       // 8
#define DE_9 &kp N9       // 9
#define DE_0 &kp N0       // 0
#define DE_SS &kp MINUS   // ß
#define DE_ACUT &kp EQUAL // ´ (dead)
// Row 2
#define DE_Q &kp Q       // Q
#define DE_W &kp W       // W
#define DE_E &kp E       // E
#define DE_R &kp R       // R
#define DE_T &kp T       // T
#define DE_Z &kp Y       // Z
#define DE_U &kp U       // U
#define DE_I &kp I       // I
#define DE_O &kp O       // O
#define DE_P &kp P       // P
#define DE_UDIA &kp LBKT // Ü
#define DE_PLUS &kp RBKT // +
// Row 3
#define DE_A &kp A            // A
#define DE_S &kp S            // S
#define DE_D &kp D            // D
#define DE_F &kp F            // F
#define DE_G &kp G            // G
#define DE_H &kp H            // H
#define DE_J &kp J            // J
#define DE_K &kp K            // K
#define DE_L &kp L            // L
#define DE_ODIA &kp SEMICOLON // Ö
#define DE_ADIA &kp APOS      // Ä
#define DE_HASH &kp BSLH      // #
// Row 4
#define DE_LABK &kp GRAVE // <
#define DE_Y &kp Z        // Y
#define DE_X &kp X        // X
#define DE_C &kp C        // C
#define DE_V &kp V        // V
#define DE_B &kp B        // B
#define DE_N &kp N        // N
#define DE_M &kp M        // M
#define DE_COMM &kp COMMA // ,
#define DE_DOT &kp DOT    // .
#define DE_MINS &kp SLASH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬─────┐
 * │ ° │ ! │ " │ § │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │     │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬───┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ * │   │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐  │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ ' │  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴──┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │        │
 * ├────┴┬──┴─┬─┴───┼───┴───┴───┴───┴───┴───┼───┴─┬─┴──┬─────┤
 * │     │    │     │                       │     │    │     │
 * └─────┴────┴─────┴───────────────────────┴─────┴────┴─────┘
 */
// Row 1
#define DE_DEG  &kp LS(GRAVE) // °
#define DE_EXCL &kp LS(N1)    // !
#define DE_DQUO &kp LS(N2)    // "
#define DE_SECT &kp LS(N3)    // §
#define DE_DLR  &kp LS(N4)    // $
#define DE_PERC &kp LS(N5)    // %
#define DE_AMPR &kp LS(N6)    // &
#define DE_SLSH &kp LS(N7)    // /
#define DE_LPRN &kp LS(N8)    // (
#define DE_RPRN &kp LS(N9)    // )
#define DE_EQL  &kp LS(N0)    // =
#define DE_QUES &kp LS(MINUS)   // ?
#define DE_GRV  &kp LS(EQUAL) // ` (dead)
// Row 2
#define DE_ASTR &kp LS(RPAR) // *
// Row 3
#define DE_QUOT &kp LS(BSLH) // '
// Row 4
#define DE_RABK &kp LS(GRAVE) // >
#define DE_SCLN &kp LS(COMMA) // ;
#define DE_COLN &kp LS(DOT)  // :
#define DE_UNDS &kp LS(SLASH) // _

// #define DE_Y &kp Z      // Y
// #define DE_Z &kp Y      // Z
// #define DE_SS &kp MINUS // ß
// #define DE_UDIA &kp LBKT          // Ü
// #define DE_ODIA &kp SEMICOLON     // Ö
// #define DE_ADIA &kp APOS          // Ä
// #define DE_MINS &kp SLASH // -
#define DE_FSLH &kp AMPS  // "/"
#define DE_STAR &kp RBRC  // "*"
#define DE_EQUAL &kp RPAR // =
// #define DE_PLUS &kp RBKT          // +
#define DE_GRAVE &kp PLUS         // `
#define DE_HASH &kp BSLH          // #
#define DE_TILDE &kp LA(RBKT)     // ~
#define DE_PIPE &kp RA(GRAVE)     // "|"
#define DE_AMPS &kp CARET         // "&"
#define DE_BSLH &kp RA(MINUS)     // "\"
#define DE_QUESTION &kp LS(MINUS) // ?
#define DE_AT &kp RA(Q)           // "@"
#define DE_LPAR &kp LS(N8)        // (
#define DE_RPAR &kp LS(N9)        // )
#define DE_LBKT &kp RA(N8)        // [
#define DE_RBKT &kp RA(N9)        // ]
#define DE_LBRC &kp RA(N7)        // {
#define DE_RBRC &kp RA(N0)        // }
// #define DE_LABK &kp GRAVE         // <
// #define DE_RABK &kp LS(GRAVE) // >
#define DE_APOS &kp PIPE      // '
// #define DE_ACUT &kp EQUAL         // ´ hasta aqui funciona

#define DE_CARET &kp HASH // ^ TODO: