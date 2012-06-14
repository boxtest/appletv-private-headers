/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "NSCopying.h"
#import "UIKBShape.h"
#import "UIKBCacheKey.h"

@class UIKBAttributeList, NSArray, NSString;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey> {
	NSString *m_name;	// 60 = 0x3c
	NSString *m_representedString;	// 64 = 0x40
	NSString *m_displayString;	// 68 = 0x44
	NSString *m_displayType;	// 72 = 0x48
	NSString *m_interactionType;	// 76 = 0x4c
	NSString *m_variantType;	// 80 = 0x50
	UIKBAttributeList *m_attributes;	// 84 = 0x54
	unsigned m_displayTypeHint;	// 88 = 0x58
	NSString *m_displayRowHint;	// 92 = 0x5c
	NSArray *m_variantKeys;	// 96 = 0x60
	NSString *m_overrideDisplayString;	// 100 = 0x64
	NSString *m_clientVariantRepresentedString;	// 104 = 0x68
	NSString *m_clientVariantActionName;	// 108 = 0x6c
	BOOL m_visible;	// 112 = 0x70
	BOOL m_ghost;	// 113 = 0x71
	int m_splitMode;	// 116 = 0x74
	NSArray *m_flicks;	// 120 = 0x78
}
@property(readonly, assign, nonatomic) BOOL acceptsShiftLock;	// G=0x302b1d51; 
@property(copy, nonatomic) UIKBAttributeList *attributes;	// G=0x3015ef89; S=0x303030c1; @synthesize=m_attributes
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x303037fd; 
@property(copy, nonatomic) NSString *clientVariantActionName;	// G=0x3016719d; S=0x300a01dd; @synthesize=m_clientVariantActionName
@property(copy, nonatomic) NSString *clientVariantRepresentedString;	// G=0x3016718d; S=0x300a01b1; @synthesize=m_clientVariantRepresentedString
@property(assign, nonatomic) BOOL disabled;	// G=0x300a0111; S=0x30302fc1; 
@property(retain, nonatomic) NSString *displayRowHint;	// G=0x30160621; S=0x300a00d9; @synthesize=m_displayRowHint
@property(copy, nonatomic) NSString *displayString;	// G=0x3008108d; S=0x3008109d; @synthesize=m_displayString
@property(copy, nonatomic) NSString *displayType;	// G=0x30085079; S=0x30303915; @synthesize=m_displayType
@property(assign, nonatomic) unsigned displayTypeHint;	// G=0x3008107d; S=0x300810c9; @synthesize=m_displayTypeHint
@property(retain, nonatomic) NSArray *flicks;	// G=0x30302e21; S=0x30303999; @synthesize=m_flicks
@property(assign, nonatomic) BOOL hidden;	// G=0x3015ef01; S=0x30089c29; 
@property(copy, nonatomic) NSString *interactionType;	// G=0x300a0101; S=0x30303941; @synthesize=m_interactionType
@property(readonly, assign, nonatomic) BOOL isClientVariantOverride;	// G=0x30081031; 
@property(assign, nonatomic) BOOL isGhost;	// G=0x301602b5; S=0x30302e31; @synthesize=m_ghost
@property(readonly, assign, nonatomic) BOOL modifiesKeyplane;	// G=0x301c34d1; 
@property(copy, nonatomic) NSString *name;	// G=0x30085411; S=0x303038e9; @synthesize=m_name
@property(copy, nonatomic) NSString *overrideDisplayString;	// G=0x30085421; S=0x300a0159; @synthesize=m_overrideDisplayString
@property(copy, nonatomic) NSString *rendering;	// G=0x3015a019; S=0x30302ef1; 
@property(copy, nonatomic) NSString *representedString;	// G=0x3008afc5; S=0x30159eed; @synthesize=m_representedString
@property(assign, nonatomic) int splitMode;	// G=0x30302e01; S=0x30302e11; @synthesize=m_splitMode
@property(assign) int textAlignment;	// G=0x3016065d; S=0x30302e89; converted property
@property(copy, nonatomic) NSString *tint;	// G=0x30160631; S=0x30302f59; 
@property(copy, nonatomic) NSArray *variantKeys;	// G=0x30085401; S=0x3008544d; @synthesize=m_variantKeys
@property(retain) id variantPopupBias;	// G=0x3030302d; S=0x30303059; converted property
@property(copy, nonatomic) NSString *variantType;	// G=0x3015fab5; S=0x3030396d; @synthesize=m_variantType
@property(assign, nonatomic) BOOL visible;	// G=0x30085099; S=0x30089c49; @synthesize=m_visible
+ (id)key;	// 0x303034f9
+ (id)keyWithKey:(id)key;	// 0x30303539
- (id)init;	// 0x30302e41
- (id)initWithCoder:(id)coder;	// 0x3030325d
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10;	// 0x30158d7d
- (id)initWithName:(id)name representedString:(id)string displayString:(id)string3 displayType:(id)type interactionType:(id)type5 variantType:(id)type6 attributes:(id)attributes geometry:(id)geometry frame:(CGRect)frame paddedFrame:(CGRect)frame10 ghost:(BOOL)ghost;	// 0x30158c5d
// declared property getter: - (BOOL)acceptsShiftLock;	// 0x302b1d51
// declared property getter: - (id)attributes;	// 0x3015ef89
- (BOOL)behavesAsShiftKey;	// 0x300847bd
// declared property getter: - (id)cacheKey;	// 0x303037fd
// declared property getter: - (id)clientVariantActionName;	// 0x3016719d
// declared property getter: - (id)clientVariantRepresentedString;	// 0x3016718d
- (id)copyWithZone:(NSZone *)zone;	// 0x30085065
- (void)dealloc;	// 0x303033e9
- (id)description;	// 0x303030f9
// declared property getter: - (BOOL)disabled;	// 0x300a0111
// declared property getter: - (id)displayRowHint;	// 0x30160621
// declared property getter: - (id)displayString;	// 0x3008108d
// declared property getter: - (id)displayType;	// 0x30085079
// declared property getter: - (unsigned)displayTypeHint;	// 0x3008107d
- (void)encodeWithCoder:(id)coder;	// 0x30303161
// declared property getter: - (id)flicks;	// 0x30302e21
// declared property getter: - (BOOL)hidden;	// 0x3015ef01
// declared property getter: - (id)interactionType;	// 0x300a0101
// declared property getter: - (BOOL)isClientVariantOverride;	// 0x30081031
// declared property getter: - (BOOL)isGhost;	// 0x301602b5
- (void)mergeAttributes:(id)attributes;	// 0x3009f965
// declared property getter: - (BOOL)modifiesKeyplane;	// 0x301c34d1
// declared property getter: - (id)name;	// 0x30085411
// declared property getter: - (id)overrideDisplayString;	// 0x30085421
- (void)removeClientVariantActionInfo;	// 0x300a0185
// declared property getter: - (id)rendering;	// 0x3015a019
// declared property getter: - (id)representedString;	// 0x3008afc5
// declared property setter: - (void)setAttributes:(id)attributes;	// 0x303030c1
// declared property setter: - (void)setClientVariantActionName:(id)name;	// 0x300a01dd
// declared property setter: - (void)setClientVariantRepresentedString:(id)string;	// 0x300a01b1
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x30302fc1
// declared property setter: - (void)setDisplayRowHint:(id)hint;	// 0x300a00d9
// declared property setter: - (void)setDisplayString:(id)string;	// 0x3008109d
// declared property setter: - (void)setDisplayType:(id)type;	// 0x30303915
// declared property setter: - (void)setDisplayTypeHint:(unsigned)hint;	// 0x300810c9
// declared property setter: - (void)setFlicks:(id)flicks;	// 0x30303999
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x30089c29
// declared property setter: - (void)setInteractionType:(id)type;	// 0x30303941
// declared property setter: - (void)setIsGhost:(BOOL)ghost;	// 0x30302e31
// declared property setter: - (void)setName:(id)name;	// 0x303038e9
// declared property setter: - (void)setOverrideDisplayString:(id)string;	// 0x300a0159
// declared property setter: - (void)setRendering:(id)rendering;	// 0x30302ef1
// declared property setter: - (void)setRepresentedString:(id)string;	// 0x30159eed
// declared property setter: - (void)setSplitMode:(int)mode;	// 0x30302e11
// converted property setter: - (void)setTextAlignment:(int)alignment;	// 0x30302e89
// declared property setter: - (void)setTint:(id)tint;	// 0x30302f59
// declared property setter: - (void)setVariantKeys:(id)keys;	// 0x3008544d
// converted property setter: - (void)setVariantPopupBias:(id)bias;	// 0x30303059
// declared property setter: - (void)setVariantType:(id)type;	// 0x3030396d
// declared property setter: - (void)setVisible:(BOOL)visible;	// 0x30089c49
// declared property getter: - (int)splitMode;	// 0x30302e01
// converted property getter: - (int)textAlignment;	// 0x3016065d
// declared property getter: - (id)tint;	// 0x30160631
- (id)variantDisplayString;	// 0x300852cd
// declared property getter: - (id)variantKeys;	// 0x30085401
// converted property getter: - (id)variantPopupBias;	// 0x3030302d
// declared property getter: - (id)variantType;	// 0x3015fab5
// declared property getter: - (BOOL)visible;	// 0x30085099
@end
