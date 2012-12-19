/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "CAAction.h"
#import <NSObject.h> // Unknown library


@interface SKLayerModule : NSObject <CAAction> {
	id _layer;	// 4 = 0x4
	id _context;	// 8 = 0x8
	int _orientation;	// 12 = 0xc
}
@property(assign) CGRect bounds;	// G=0x356103d9; S=0x35610419; converted property
@property(retain) id context;	// G=0x356101c1; S=0x3561017d; converted property
@property(readonly, retain) id layer;	// G=0x356101d1; converted property
+ (Class)layerClass;	// 0x35610219
+ (id)sharedModule;	// 0x3560ff69
- (void)initLayer:(id)layer;	// 0x3561034d
- (id)initWithFrame:(CGRect)frame;	// 0x356100c5
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x356105a1
- (id)addButtonWithFrame:(CGRect)frame text:(id)text target:(id)target action:(SEL)action;	// 0x356104e1
- (void)addContentToLayer:(id)layer;	// 0x35610351
// converted property getter: - (CGRect)bounds;	// 0x356103d9
// converted property getter: - (id)context;	// 0x356101c1
- (id)createLayer;	// 0x35610235
- (void)dealloc;	// 0x35610109
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x3561059d
- (void)hide;	// 0x35610465
// converted property getter: - (id)layer;	// 0x356101d1
- (void)orderIn;	// 0x356105d5
- (void)runActionForKey:(id)key object:(id)object arguments:(id)arguments;	// 0x356105d9
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x35610419
// converted property setter: - (void)setContext:(id)context;	// 0x3561017d
- (void)setFrame:(CGRect)frame;	// 0x35610355
- (void)setOrientation:(int)orientation;	// 0x3561041d
- (BOOL)showing;	// 0x3561048d
@end
