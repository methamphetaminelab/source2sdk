#pragma once
#include <cstdint>
#include "!GlobalTypes.hpp"

// /////////////////////////////////////////////////////////////
// Binary: panorama.dll
// Classes count: 0 (Allocated) | 0 (Unallocated)
// Enums count: 0 (Allocated) | 2 (Unallocated)
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

// Registered binary: panorama.dll (project 'panorama_content')
// Enumerator count: 13
// Alignment: 4
// Size: 0x4
enum class ELayoutNodeType : std::uint32_t
{
	ROOT = 0x0,
	STYLES = 0x1,
	SCRIPT_BODY = 0x2,
	SCRIPTS = 0x3,
	SNIPPETS = 0x4,
	INCLUDE = 0x5,
	SNIPPET = 0x6,
	PANEL = 0x7,
	PANEL_ATTRIBUTE = 0x8,
	PANEL_ATTRIBUTE_VALUE = 0x9,
	REFERENCE_CONTENT = 0xa,
	REFERENCE_COMPILED = 0xb,
	REFERENCE_PASSTHROUGH = 0xc,
};

// Registered binary: panorama.dll (project 'panorama_content')
// Enumerator count: 16
// Alignment: 4
// Size: 0x4
enum class EStyleNodeType : std::uint32_t
{
	ROOT = 0x0,
	EXPRESSION = 0x1,
	PROPERTY = 0x2,
	DEFINE = 0x3,
	IMPORT = 0x4,
	KEYFRAMES = 0x5,
	KEYFRAME_SELECTOR = 0x6,
	STYLE_SELECTOR = 0x7,
	WHITESPACE = 0x8,
	EXPRESSION_TEXT = 0x9,
	EXPRESSION_URL = 0xa,
	EXPRESSION_CONCAT = 0xb,
	REFERENCE_CONTENT = 0xc,
	REFERENCE_COMPILED = 0xd,
	REFERENCE_PASSTHROUGH = 0xe,
	COMPILER_CONDITIONAL = 0xf,
};

