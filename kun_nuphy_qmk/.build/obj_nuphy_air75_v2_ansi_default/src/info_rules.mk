# Copyright 2024 QMK
# SPDX-License-Identifier: GPL-2.0-or-later

################################################################################
#
# 88888888888 888      d8b                .d888 d8b 888               d8b
#     888     888      Y8P               d88P"  Y8P 888               Y8P
#     888     888                        888        888
#     888     88888b.  888 .d8888b       888888 888 888  .d88b.       888 .d8888b
#     888     888 "88b 888 88K           888    888 888 d8P  Y8b      888 88K
#     888     888  888 888 "Y8888b.      888    888 888 88888888      888 "Y8888b.
#     888     888  888 888      X88      888    888 888 Y8b.          888      X88
#     888     888  888 888  88888P'      888    888 888  "Y8888       888  88888P'
#
#                                                       888                 888
#                                                       888                 888
#                                                       888                 888
#    .d88b.   .d88b.  88888b.   .d88b.  888d888 8888b.  888888 .d88b.   .d88888
#   d88P"88b d8P  Y8b 888 "88b d8P  Y8b 888P"      "88b 888   d8P  Y8b d88" 888
#   888  888 88888888 888  888 88888888 888    .d888888 888   88888888 888  888
#   Y88b 888 Y8b.     888  888 Y8b.     888    888  888 Y88b. Y8b.     Y88b 888
#    "Y88888  "Y8888  888  888  "Y8888  888    "Y888888  "Y888 "Y8888   "Y88888
#        888
#   Y8b d88P
#    "Y88P"
#
################################################################################

BOOTLOADER ?= stm32-dfu
MCU ?= STM32F072
NO_USB_STARTUP_CHECK ?= yes
PLATFORM_KEY ?= chibios
RGB_MATRIX_DRIVER ?= ws2812
BOOTMAGIC_ENABLE ?= yes
MOUSEKEY_ENABLE ?= yes
EXTRAKEY_ENABLE ?= yes
CONSOLE_ENABLE ?= yes
COMMAND_ENABLE ?= no
NKRO_ENABLE ?= yes
KEY_LOCK_ENABLE ?= yes
RGB_MATRIX_ENABLE ?= yes
