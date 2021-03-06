/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {
	CMDrawableMapper *_mapper;	// 4 = 0x4
	NSMutableArray *_actions;	// 8 = 0x8
	CGRect _frame;	// 12 = 0xc
	CGRect _finalFrame;	// 28 = 0x1c
	CFDataRef _data;	// 44 = 0x2c
	CGDataConsumerRef _dataConsumer;	// 48 = 0x30
	CGContextRef _cgContext;	// 52 = 0x34
	NSAffineTransform *_currentTransform;	// 56 = 0x38
	NSMutableArray *_transforms;	// 60 = 0x3c
	CGImageRef _fillImage;	// 64 = 0x40
}
@property(readonly, assign) CGRect frame;	// G=0x36ba5e59; converted property
@property(retain) CMDrawableMapper *mapper;	// G=0x36b2ada9; S=0x36a43439; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x36a4332d
- (id).cxx_construct;	// 0x36a43329
- (void)_addTransform:(id)transform;	// 0x36a4ed05
- (void)_applyTransform:(id)transform;	// 0x36a4ba41
- (CGContextRef)_cgContext;	// 0x36ba5e49
- (void)_closeContext;	// 0x36a4bd75
- (void)_copyCGContext;	// 0x36ba5d01
- (void)_playbackActions;	// 0x36a4bac9
- (void)_restoreLastTransform;	// 0x36a4ee21
- (CGRect)_transformRect:(CGRect)rect withTransform:(id)transform;	// 0x36a43e09
- (void)addDebugPath:(CGPathRef)path;	// 0x36ba5fe5
- (void)addPath:(CGPathRef)path;	// 0x36a49019
- (void)addTransform:(id)transform;	// 0x36a4ec81
- (id)copyPDF;	// 0x36ba5e7d
- (float)currentScaleFactor;	// 0x36ba5f81
- (CGAffineTransform)currentTransform;	// 0x36a48a11
- (void)dealloc;	// 0x36a460d9
// converted property getter: - (CGRect)frame;	// 0x36ba5e59
// converted property getter: - (id)mapper;	// 0x36b2ada9
- (CGRect)pdfFrame;	// 0x36a4ba05
- (void)restoreLastTransform;	// 0x36a4eda1
- (void)setFillColor:(CGColorRef)color;	// 0x36a48fa9
- (void)setFillImage:(CGImageRef)image;	// 0x36b2adb9
- (void)setLineDash:(id)dash;	// 0x36a98b05
- (void)setLineWidth:(float)width;	// 0x36a4f1b9
// converted property setter: - (void)setMapper:(id)mapper;	// 0x36a43439
- (void)setStrokeColor:(CGColorRef)color;	// 0x36a48ed5
- (CGRect)transformRectToGroup:(CGRect)group;	// 0x36b8dd19
- (CGRect)transformRectToPage:(CGRect)page;	// 0x36a43db5
@end

