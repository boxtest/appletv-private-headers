/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSMutableDictionary, NSValue;

__attribute__((visibility("hidden")))
@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
	NSMutableDictionary *backgroundImages;	// 4 = 0x4
	NSMutableDictionary *miniBackgroundImages;	// 8 = 0x8
	NSValue *titlePositionOffset;	// 12 = 0xc
	NSValue *miniTitlePositionOffset;	// 16 = 0x10
	NSNumber *backgroundVerticalAdjustment;	// 20 = 0x14
	NSNumber *miniBackgroundVerticalAdjustment;	// 24 = 0x18
}
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x32dffe2d; S=0x32f1d571; @synthesize
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x32e4c09d; S=0x32f1d581; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x32e4c06d; S=0x32f1d561; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x32dffe5d; S=0x32f1d551; @synthesize
- (id)anyBackgroundImage;	// 0x32f1d4a9
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x32d6117d
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x32dffe2d
- (void)dealloc;	// 0x32e04d7d
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x32e4c09d
// declared property getter: - (id)miniTitlePositionOffset;	// 0x32e4c06d
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x32d60ebd
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x32f1d571
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x32f1d581
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x32f1d561
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x32f1d551
// declared property getter: - (id)titlePositionOffset;	// 0x32dffe5d
@end

