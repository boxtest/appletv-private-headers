/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString;

@interface CAScrollLayer : CALayer {
}
@property(copy) NSString *scrollMode;	// G=0x31ac444d; S=0x31ac4455; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x31ac44c1
+ (id)defaultValueForKey:(id)key;	// 0x31ac445d
- (void)_scrollPoint:(CGPoint)point fromLayer:(id)layer;	// 0x31ac4061
- (void)_scrollRect:(CGRect)rect fromLayer:(id)layer;	// 0x31ac40b1
- (CGRect)_visibleRectOfLayer:(id)layer;	// 0x31ac43bd
// declared property getter: - (id)scrollMode;	// 0x31ac444d
- (void)scrollToPoint:(CGPoint)point;	// 0x31ac4209
- (void)scrollToRect:(CGRect)rect;	// 0x31ac4291
// declared property setter: - (void)setScrollMode:(id)mode;	// 0x31ac4455
@end
