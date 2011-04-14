/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString;

@interface CATextLayer : CALayer {
@private
	CATextLayerPrivate *_state;	// 48 = 0x30
}
@property(copy) NSString *alignmentMode;	// G=0x30291841; S=0x3029187d; 
@property(assign) BOOL allowsFontSubpixelQuantization;	// G=0x302918f1; S=0x30291911; 
@property(assign) void *font;	// G=0x302918cd; S=0x302918e5; 
@property(assign) float fontSize;	// G=0x302918a9; S=0x302918b5; 
@property(assign) CGColorRef foregroundColor;	// G=0x302918c1; S=0x302918d9; 
@property(copy) id string;	// G=0x3029185d; S=0x30291899; 
@property(copy) NSString *truncationMode;	// G=0x3029184d; S=0x30291889; 
@property(copy) id truncationString;	// G=0x30291831; S=0x3029186d; 
@property(assign, getter=isWrapped) BOOL wrapped;	// G=0x30291901; S=0x30291921; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x3029127d
+ (id)defaultValueForKey:(id)key;	// 0x30291931
+ (BOOL)needsDisplayForKey:(id)key;	// 0x30291aad
- (id)init;	// 0x302911c1
- (id)initWithLayer:(id)layer;	// 0x30291f85
- (void)_applyLinesToFunction:(/*function-pointer*/ void *)function info:(void *)info;	// 0x30291459
- (id)_createStringDict;	// 0x302912f5
- (CTLineRef)_createTruncationToken;	// 0x30291acd
- (void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;	// 0x302916d1
- (id)_implicitActionForKey:(id)key;	// 0x30291171
- (CGSize)_preferredSize;	// 0x30291b6d
- (void)_prepareContext:(CGContextRef)context;	// 0x302917fd
- (CTTypesetterRef)_retainTypesetter;	// 0x30291e29
// declared property getter: - (id)alignmentMode;	// 0x30291841
// declared property getter: - (BOOL)allowsFontSubpixelQuantization;	// 0x302918f1
- (void)dealloc;	// 0x30291215
- (void)didChangeValueForKey:(id)key;	// 0x30291c9d
- (void)drawInContext:(CGContextRef)context;	// 0x302916f1
// declared property getter: - (void *)font;	// 0x302918cd
// declared property getter: - (float)fontSize;	// 0x302918a9
// declared property getter: - (CGColorRef)foregroundColor;	// 0x302918c1
// declared property getter: - (BOOL)isWrapped;	// 0x30291901
// declared property setter: - (void)setAlignmentMode:(id)mode;	// 0x3029187d
// declared property setter: - (void)setAllowsFontSubpixelQuantization:(BOOL)quantization;	// 0x30291911
// declared property setter: - (void)setFont:(void *)font;	// 0x302918e5
// declared property setter: - (void)setFontSize:(float)size;	// 0x302918b5
// declared property setter: - (void)setForegroundColor:(CGColorRef)color;	// 0x302918d9
// declared property setter: - (void)setString:(id)string;	// 0x30291899
// declared property setter: - (void)setTruncationMode:(id)mode;	// 0x30291889
// declared property setter: - (void)setTruncationString:(id)string;	// 0x3029186d
// declared property setter: - (void)setWrapped:(BOOL)wrapped;	// 0x30291921
// declared property getter: - (id)string;	// 0x3029185d
// declared property getter: - (id)truncationMode;	// 0x3029184d
// declared property getter: - (id)truncationString;	// 0x30291831
- (BOOL)wrapped;	// 0x30291265
@end
