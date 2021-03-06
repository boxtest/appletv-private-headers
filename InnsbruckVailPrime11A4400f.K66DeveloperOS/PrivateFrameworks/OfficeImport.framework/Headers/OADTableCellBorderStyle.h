/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>

@class OADStroke;

@interface OADTableCellBorderStyle : NSObject {
	OADStroke *mLeftStroke;	// 4 = 0x4
	OADStroke *mRightStroke;	// 8 = 0x8
	OADStroke *mTopStroke;	// 12 = 0xc
	OADStroke *mBottomStroke;	// 16 = 0x10
	OADStroke *mHorzInsideStroke;	// 20 = 0x14
	OADStroke *mVertInsideStroke;	// 24 = 0x18
	OADStroke *mTopLeftToBottomRightStroke;	// 28 = 0x1c
	OADStroke *mBottomLeftToTopRightStroke;	// 32 = 0x20
}
@property(retain) id bottomLeftToTopRightStroke;	// G=0x318f44a1; S=0x318f44b1; converted property
@property(retain) id bottomStroke;	// G=0x31862119; S=0x31836a05; converted property
@property(retain) id horzInsideStroke;	// G=0x31862129; S=0x31836a41; converted property
@property(retain) id leftStroke;	// G=0x31862149; S=0x31836951; converted property
@property(retain) id rightStroke;	// G=0x31862169; S=0x3183698d; converted property
@property(retain) id topLeftToBottomRightStroke;	// G=0x318f4455; S=0x318f4465; converted property
@property(retain) id topStroke;	// G=0x318620f9; S=0x318369c9; converted property
@property(retain) id vertInsideStroke;	// G=0x31862179; S=0x31836a7d; converted property
+ (id)defaultAxisParallelStroke;	// 0x318f44ed
+ (id)defaultObliqueStroke;	// 0x318f4549
+ (id)defaultStyle;	// 0x318f4565
- (void)applyOverridesFrom:(id)from;	// 0x318f483d
// converted property getter: - (id)bottomLeftToTopRightStroke;	// 0x318f44a1
// converted property getter: - (id)bottomStroke;	// 0x31862119
- (void)dealloc;	// 0x31838301
// converted property getter: - (id)horzInsideStroke;	// 0x31862129
// converted property getter: - (id)leftStroke;	// 0x31862149
// converted property getter: - (id)rightStroke;	// 0x31862169
// converted property setter: - (void)setBottomLeftToTopRightStroke:(id)topRightStroke;	// 0x318f44b1
// converted property setter: - (void)setBottomStroke:(id)stroke;	// 0x31836a05
// converted property setter: - (void)setHorzInsideStroke:(id)stroke;	// 0x31836a41
// converted property setter: - (void)setLeftStroke:(id)stroke;	// 0x31836951
// converted property setter: - (void)setRightStroke:(id)stroke;	// 0x3183698d
// converted property setter: - (void)setTopLeftToBottomRightStroke:(id)bottomRightStroke;	// 0x318f4465
// converted property setter: - (void)setTopStroke:(id)stroke;	// 0x318369c9
// converted property setter: - (void)setVertInsideStroke:(id)stroke;	// 0x31836a7d
- (id)shallowCopy;	// 0x318f46d5
- (id)stroke:(int)stroke;	// 0x318f43bd
// converted property getter: - (id)topLeftToBottomRightStroke;	// 0x318f4455
// converted property getter: - (id)topStroke;	// 0x318620f9
// converted property getter: - (id)vertInsideStroke;	// 0x31862179
@end

