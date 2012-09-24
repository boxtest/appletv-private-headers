/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMObject.h"

@class DOMCSSPrimitiveValue;

@interface DOMRGBColor : DOMObject {
}
@property(readonly, assign) DOMCSSPrimitiveValue *alpha;	// G=0x31d350dd; 
@property(readonly, assign) DOMCSSPrimitiveValue *blue;	// G=0x31d34f55; 
@property(readonly, assign) DOMCSSPrimitiveValue *green;	// G=0x31d34dc9; 
@property(readonly, assign) DOMCSSPrimitiveValue *red;	// G=0x31d34a8d; 
// declared property getter: - (id)alpha;	// 0x31d350dd
// declared property getter: - (id)blue;	// 0x31d34f55
- (CGColorRef)color;	// 0x31e6df55
- (void)dealloc;	// 0x31d38a1d
- (void)finalize;	// 0x31e6df05
// declared property getter: - (id)green;	// 0x31d34dc9
// declared property getter: - (id)red;	// 0x31d34a8d
@end
