/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIBarItemAppearanceStorage.h"

@class _UIBarBackButtonItemAppearanceStorage, NSValue, UIColor, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {
	NSMutableDictionary *backgroundImages;	// 8 = 0x8
	NSMutableDictionary *miniBackgroundImages;	// 12 = 0xc
	UIColor *tintColor;	// 16 = 0x10
	NSValue *titlePositionOffset;	// 20 = 0x14
	NSValue *miniTitlePositionOffset;	// 24 = 0x18
	NSNumber *backgroundVerticalAdjustment;	// 28 = 0x1c
	NSNumber *miniBackgroundVerticalAdjustment;	// 32 = 0x20
	_UIBarBackButtonItemAppearanceStorage *backButtonAppearance;	// 36 = 0x24
}
@property(retain, nonatomic) NSNumber *backButtonBackgroundVerticalAdjustment;	// G=0x32c59aad; S=0x32d77469; 
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;	// G=0x32c59add; S=0x32d77371; 
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x32baddf1; S=0x32d77581; @synthesize
@property(retain, nonatomic) NSNumber *miniBackButtonBackgroundVerticalAdjustment;	// G=0x32ca5d25; S=0x32d774e5; 
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;	// G=0x32ca5cf5; S=0x32d773ed; 
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x32bbb311; S=0x32d77591; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x32bbb301; S=0x32d77571; @synthesize
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32bad0dd; S=0x32bbb2f1; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x32bad199; S=0x32d77561; @synthesize
- (id)anyBackButtonBackgroundImage;	// 0x32d77351
- (id)anyBackgroundImage;	// 0x32d77239
- (id)backButtonBackgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x32bbaab9
// declared property getter: - (id)backButtonBackgroundVerticalAdjustment;	// 0x32c59aad
// declared property getter: - (id)backButtonTitlePositionOffset;	// 0x32c59add
- (id)backgroundImageForState:(unsigned)state style:(int)style isMini:(BOOL)mini;	// 0x32bad0ed
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x32baddf1
- (void)dealloc;	// 0x32bade01
// declared property getter: - (id)miniBackButtonBackgroundVerticalAdjustment;	// 0x32ca5d25
// declared property getter: - (id)miniBackButtonTitlePositionOffset;	// 0x32ca5cf5
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x32bbb311
// declared property getter: - (id)miniTitlePositionOffset;	// 0x32bbb301
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x32bbaad9
// declared property setter: - (void)setBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x32d77469
// declared property setter: - (void)setBackButtonTitlePositionOffset:(id)offset;	// 0x32d77371
- (void)setBackgroundImage:(id)image forState:(unsigned)state style:(int)style isMini:(BOOL)mini;	// 0x32bad475
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x32d77581
// declared property setter: - (void)setMiniBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x32d774e5
// declared property setter: - (void)setMiniBackButtonTitlePositionOffset:(id)offset;	// 0x32d773ed
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x32d77591
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x32d77571
// declared property setter: - (void)setTintColor:(id)color;	// 0x32bbb2f1
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x32d77561
// declared property getter: - (id)tintColor;	// 0x32bad0dd
// declared property getter: - (id)titlePositionOffset;	// 0x32bad199
@end
