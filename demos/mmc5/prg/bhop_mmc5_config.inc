__BHOP_CONFIG = 1

; Demo-specific config for MMC5

; WARNING: This copy of bhop/config.inc is used to override the project
; defaults. Do not rely on any of its contents, as it may be somewhat out of sync
; with the main config located at bhop/config.inc in the project root.

.define BHOP_PLAYER_SEGMENT "BHOP"
.define BHOP_RAM_SEGMENT "RAM"
.define BHOP_ZP_SEGMENT "ZEROPAGE"

.import bhop_music_data

BHOP_MUSIC_BASE = bhop_music_data
BHOP_DPCM_BANKING = 1

.if ::BHOP_DPCM_BANKING
.import bhop_apply_dpcm_bank
BHOP_DPCM_SWITCH_ROUTINE = bhop_apply_dpcm_bank
.endif

BHOP_PATTERN_BANKING = 0

.if ::BHOP_PATTERN_BANKING
.import bhop_apply_music_bank
BHOP_PATTERN_SWITCH_ROUTINE = bhop_apply_music_bank
.endif

BHOP_ZSAW_ENABLED = 0
BHOP_MMC5_ENABLED = 1
