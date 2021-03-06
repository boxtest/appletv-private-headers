/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellBorderStyle : NSObject {
@private
	OADStroke *mLeftStroke;	// 4 = 0x4
	OADStroke *mRightStroke;	// 8 = 0x8
	OADStroke *mTopStroke;	// 12 = 0xc
	OADStroke *mBottomStroke;	// 16 = 0x10
	OADStroke *mHorzInsideStroke;	// 20 = 0x14
	OADStroke *mVertInsideStroke;	// 24 = 0x18
	OADStroke *mTopLeftToBottomRightStroke;	// 28 = 0x1c
	OADStroke *mBottomLeftToTopRightStroke;	// 32 = 0x20
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x30e891fd; S=0x30e89e55; converted property
@property(retain) id bottomStroke;	// G=0x30dbdabd; S=0x30d92a19; converted property
@property(retain) id horzInsideStroke;	// G=0x30dbdacd; S=0x30d92a59; converted property
@property(retain) id leftStroke;	// G=0x30dbdaed; S=0x30d92959; converted property
@property(retain) id rightStroke;	// G=0x30dbdb0d; S=0x30d92999; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x30e891ed; S=0x30e89e95; converted property
@property(retain) id topStroke;	// G=0x30dbda9d; S=0x30d929d9; converted property
@property(retain) id vertInsideStroke;	// G=0x30dbdb1d; S=0x30d92a99; converted property
+ (id)defaultAxisParallelStroke;	// 0x30e89acd
+ (id)defaultObliqueStroke;	// 0x30e89ab1
+ (id)defaultStyle;	// 0x30e89929
- (void)applyOverridesFrom:(id)from;	// 0x30e89b29
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x30e891fd
// converted property getter: - (id)bottomStroke;	// 0x30dbdabd
- (void)dealloc;	// 0x30d946ad
// converted property getter: - (id)horzInsideStroke;	// 0x30dbdacd
// converted property getter: - (id)leftStroke;	// 0x30dbdaed
// converted property getter: - (id)rightStroke;	// 0x30dbdb0d
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x30e89e55
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x30d92a19
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x30d92a59
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x30d92959
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x30d92999
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x30e89e95
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x30d929d9
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x30d92a99
- (id)shallowCopy;	// 0x30e89cdd
- (id)stroke:(int)stroke;	// 0x30e89ed5
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x30e891ed
// converted property getter: - (id)topStroke;	// 0x30dbda9d
// converted property getter: - (id)vertInsideStroke;	// 0x30dbdb1d
@end

