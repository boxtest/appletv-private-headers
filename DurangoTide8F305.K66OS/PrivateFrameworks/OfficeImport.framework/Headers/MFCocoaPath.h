/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFPath.h"
#import "OfficeImport-Structs.h"

@class NSBezierPathStub;

__attribute__((visibility("hidden")))
@interface MFCocoaPath : MFPath {
@private
	NSBezierPathStub *m_path;	// 4 = 0x4
	int m_state;	// 8 = 0x8
}
@property(readonly, assign) int state;	// G=0x345f20e5; converted property
- (id)init;	// 0x34450049
- (id)initWithPath:(id)path state:(int)state;	// 0x3445ba5d
- (int)abort;	// 0x345f2139
- (void)appendBezierPath:(id)path dc:(id)dc;	// 0x344de249
- (int)begin;	// 0x344ddea1
- (int)closeFigure;	// 0x344de561
- (id)copyWithZone:(NSZone *)zone;	// 0x3445b735
- (CGPoint)currentPoint;	// 0x344de599
- (void)dealloc;	// 0x3445f7a1
- (int)end;	// 0x344de639
- (int)fill:(id)fill;	// 0x344de709
- (int)flatten;	// 0x345f20f9
- (id)getBezierPath;	// 0x3453a5d9
- (BOOL)isOpen;	// 0x34453fb1
// converted property getter: - (int)state;	// 0x345f20e5
- (int)stroke:(id)stroke;	// 0x3454fe51
- (int)widen:(id)widen;	// 0x345f20f5
@end

