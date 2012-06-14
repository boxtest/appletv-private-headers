/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class WAKWindow;

@interface UIWebTiledView : UIView {
	WAKWindow *_wakWindow;	// 48 = 0x30
	int _inGestureType;	// 52 = 0x34
	int _tilingArea;	// 56 = 0x38
	BOOL _didFirstTileLayout;	// 60 = 0x3c
	BOOL _layoutTilesInMainThread;	// 61 = 0x3d
	BOOL _tilingModeIsLocked;	// 62 = 0x3e
}
@property(assign) BOOL drawsGrid;	// G=0x302e12ed; S=0x302e12e9; converted property
@property(assign) BOOL keepsZoomedOutTiles;	// G=0x302e1359; S=0x300c3599; converted property
@property(assign) BOOL layoutTilesInMainThread;	// G=0x302e13bd; S=0x301b166d; converted property
@property(assign) BOOL logsTilingChanges;	// G=0x302e1301; S=0x302e12fd; converted property
@property(assign) unsigned maxTileCount;	// G=0x302e12f1; S=0x300a4ea1; converted property
@property(assign) BOOL tileDrawingEnabled;	// G=0x302e1331; S=0x302e1305; converted property
@property(assign) CGSize tileSize;	// G=0x302e12dd; S=0x300a4e9d; converted property
@property(assign) BOOL tilesOpaque;	// G=0x302e1335; S=0x300a5139; converted property
@property(assign) int tilingArea;	// G=0x30171359; S=0x300a9fd9; converted property
@property(assign, getter=isTilingEnabled) BOOL tilingEnabled;	// G=0x302e12f9; S=0x300a4ea5; converted property
@property(readonly, retain) WAKWindow *wakWindow;	// G=0x302e13cd; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x300a3995
- (void)_didScroll;	// 0x3016a5c1
- (void)_screenChanged:(id)changed;	// 0x302e1195
- (void)_updateForScreen:(id)screen;	// 0x300a6ca9
- (unsigned)adjustedMaxTileCount;	// 0x302e12f5
- (void)dealloc;	// 0x3017b711
// converted property getter: - (BOOL)drawsGrid;	// 0x302e12ed
- (void)dumpTiles;	// 0x302e139d
// converted property getter: - (BOOL)isTilingEnabled;	// 0x302e12f9
// converted property getter: - (BOOL)keepsZoomedOutTiles;	// 0x302e1359
- (void)layoutSubviews;	// 0x300a7351
// converted property getter: - (BOOL)layoutTilesInMainThread;	// 0x302e13bd
- (void)layoutTilesNow;	// 0x30169899
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x302e1155
- (void)layoutTilesNowOnWebThread;	// 0x302e1135
- (void)lockTilingMode;	// 0x302e1225
// converted property getter: - (BOOL)logsTilingChanges;	// 0x302e1301
// converted property getter: - (unsigned)maxTileCount;	// 0x302e12f1
- (void)removeAllNonVisibleTiles;	// 0x301689e9
- (void)removeAllTiles;	// 0x30169bd5
- (void)removeForegroundTiles;	// 0x302e137d
// converted property setter: - (void)setDrawsGrid:(BOOL)grid;	// 0x302e12e9
- (void)setInGesture:(int)gesture;	// 0x3017102d
// converted property setter: - (void)setKeepsZoomedOutTiles:(BOOL)tiles;	// 0x300c3599
// converted property setter: - (void)setLayoutTilesInMainThread:(BOOL)mainThread;	// 0x301b166d
// converted property setter: - (void)setLogsTilingChanges:(BOOL)changes;	// 0x302e12fd
// converted property setter: - (void)setMaxTileCount:(unsigned)count;	// 0x300a4ea1
- (void)setNeedsDisplay;	// 0x300a6a0d
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x302e1259
- (void)setNeedsLayout;	// 0x300a3d1d
// converted property setter: - (void)setTileDrawingEnabled:(BOOL)enabled;	// 0x302e1305
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x300a4e9d
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x300a5139
// converted property setter: - (void)setTilingArea:(int)area;	// 0x300a9fd9
// converted property setter: - (void)setTilingEnabled:(BOOL)enabled;	// 0x300a4ea5
- (void)setTransform:(CGAffineTransform)transform;	// 0x302e1295
- (void)setWAKWindow:(id)window;	// 0x302e10f5
// converted property getter: - (BOOL)tileDrawingEnabled;	// 0x302e1331
// converted property getter: - (CGSize)tileSize;	// 0x302e12dd
// converted property getter: - (BOOL)tilesOpaque;	// 0x302e1335
// converted property getter: - (int)tilingArea;	// 0x30171359
- (void)unlockTilingMode;	// 0x302e1239
- (void)updateTilingMode;	// 0x300aa019
- (CGRect)visibleRect;	// 0x3016fe5d
// converted property getter: - (id)wakWindow;	// 0x302e13cd
- (void)willMoveToWindow:(id)window;	// 0x300a6c79
- (WKWindow *)wkWindow;	// 0x300a3da5
@end
