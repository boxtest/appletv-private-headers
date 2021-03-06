/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPhoneBrush.h"

@class TSUColor;

@interface MFPhoneSolidBrush : MFPhoneBrush {
	TSUColor *m_colour;	// 4 = 0x4
}
+ (id)solidBrushWithColour:(id)colour;	// 0x348cc351
- (id)initWithColour:(id)colour;	// 0x348cc38d
- (void)dealloc;	// 0x348d06d9
- (void)fillPath:(id)path :(CGPathRef)arg2;	// 0x34954209
@end

