/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import <NSObject.h> // Unknown library

@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject {
	CPPage *page;	// 4 = 0x4
	NSMutableArray *objectsOnPage;	// 8 = 0x8
	float mapTemp;	// 12 = 0xc
}
@property(readonly, retain) CPPage *page;	// G=0x307aa1c9; converted property
- (id)initWithPage:(id)page;	// 0x307aa1d9
- (id)column:(CGPoint)column;	// 0x307aa421
- (unsigned)columnsAt:(CGPoint)at;	// 0x307aa479
- (int)compareByReadingOrder:(CGPoint)order to:(CGPoint)to;	// 0x307aa231
- (void)dealloc;	// 0x307aa811
- (id)findBestMatch:(id)match atPoint:(CGPoint)point;	// 0x307aa871
- (void)findClickableObjects:(BOOL)objects;	// 0x307aa9bd
- (id)findObjectIn:(id)anIn at:(CGPoint)at count:(int *)count;	// 0x307ab05d
- (BOOL)hitTestGraphicObject:(id)object point:(CGPoint)point;	// 0x307aae2d
- (BOOL)hitTestParagraph:(id)paragraph point:(CGPoint)point;	// 0x307aaf25
- (id)layoutArea:(CGPoint)area;	// 0x307aa4b1
- (id)objectAtPoint:(CGPoint)point;	// 0x307aa28d
// converted property getter: - (id)page;	// 0x307aa1c9
- (id)paragraph:(CGPoint)paragraph;	// 0x307aa67d
- (id)paragraphNear:(CGPoint)near;	// 0x307aa519
- (id)textLine:(CGPoint)line;	// 0x307aa2c5
@end
