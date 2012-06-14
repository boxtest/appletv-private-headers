/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(copy) NSString *TVMode;	// G=0x36cdafcd; S=0x36cdb785; 
@property(copy) NSString *TVSignalType;	// G=0x36cdb009; S=0x36cdb6dd; 
@property(assign) BOOL allowsVirtualModes;	// G=0x36cdaf91; S=0x36cdb815; 
@property(assign, getter=isBlanked) BOOL blanked;	// G=0x36cdae01; S=0x36cdbab5; 
@property(readonly, assign) CGRect bounds;	// G=0x36cdc3c5; 
@property(readonly, assign) CAWindowServerDisplay *cloneMaster;	// G=0x36cdbadd; 
@property(readonly, assign) NSSet *clones;	// G=0x36cdbfd1; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x36cdaf39; S=0x36cdb83d; 
@property(assign) float contrast;	// G=0x36cdae6d; S=0x36cdb951; 
@property(readonly, assign) NSString *deviceName;	// G=0x36cdada1; 
@property(readonly, assign) unsigned displayId;	// G=0x36cdadbd; 
@property(assign) float idealRefreshRate;	// G=0x36cdaef1; S=0x36cdb8f1; 
@property(assign) BOOL invertsColors;	// G=0x36cdae49; S=0x36cdb971; 
@property(assign) float maximumRefreshRate;	// G=0x36cdaec9; S=0x36cdb911; 
@property(assign) float minimumRefreshRate;	// G=0x36cdaea1; S=0x36cdb931; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x36cdb5fd; S=0x36cdb5e1; 
@property(readonly, assign) NSString *name;	// G=0x36cdad89; 
@property(copy) NSString *orientation;	// G=0x36cdb9b9; S=0x36cdba1d; 
@property(assign) float overscanAmount;	// G=0x36cdae21; S=0x36cdb999; 
@property(readonly, assign) unsigned rendererFlags;	// G=0x36cdadd9; 
@property(assign) int tag;	// G=0x36cdafb1; S=0x36cdb7f1; 
@property(assign) BOOL usesPreferredModeRefreshRate;	// G=0x36cdaf19; S=0x36cdb8c9; 
// declared property getter: - (id)TVMode;	// 0x36cdafcd
// declared property getter: - (id)TVSignalType;	// 0x36cdb009
- (id)_initWithCADisplayServer:(Server *)cadisplayServer;	// 0x36cdb621
- (void)addClone:(id)clone;	// 0x36cdb5cd
- (void)addClone:(id)clone options:(id)options;	// 0x36cdbd81
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x36cdaf91
// declared property getter: - (CGRect)bounds;	// 0x36cdc3c5
- (unsigned)clientPortAtPosition:(CGPoint)position;	// 0x36c30d2d
- (unsigned)clientPortOfContextId:(unsigned)contextId;	// 0x36cdc2ed
// declared property getter: - (id)cloneMaster;	// 0x36cdbadd
// declared property getter: - (id)clones;	// 0x36cdbfd1
// declared property getter: - (id)colorMode;	// 0x36cdaf39
- (unsigned)contextIdAtPosition:(CGPoint)position;	// 0x36c2a231
- (unsigned)contextIdHostingContextId:(unsigned)anId;	// 0x36cdc2b1
- (id)contextIdsWithClientPort:(unsigned)clientPort;	// 0x36cdc31d
// declared property getter: - (float)contrast;	// 0x36cdae6d
- (CGPoint)convertPoint:(CGPoint)point fromContextId:(unsigned)contextId;	// 0x36cdc141
- (CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;	// 0x36c30d65
- (void)dealloc;	// 0x36cdc465
- (id)description;	// 0x36cdb665
// declared property getter: - (id)deviceName;	// 0x36cdada1
// declared property getter: - (unsigned)displayId;	// 0x36cdadbd
- (CGRect)frameOfContextId:(unsigned)contextId;	// 0x36cdc17d
// declared property getter: - (float)idealRefreshRate;	// 0x36cdaef1
- (void)invalidate;	// 0x36cdad51
// declared property getter: - (BOOL)invertsColors;	// 0x36cdae49
// declared property getter: - (BOOL)isBlanked;	// 0x36cdae01
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x36cdb5fd
// declared property getter: - (float)maximumRefreshRate;	// 0x36cdaec9
// declared property getter: - (float)minimumRefreshRate;	// 0x36cdaea1
// declared property getter: - (id)name;	// 0x36cdad89
// declared property getter: - (id)orientation;	// 0x36cdb9b9
// declared property getter: - (float)overscanAmount;	// 0x36cdae21
- (void)removeAllClones;	// 0x36cdbb05
- (void)removeClone:(id)clone;	// 0x36cdbca9
// declared property getter: - (unsigned)rendererFlags;	// 0x36cdadd9
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x36cdb815
// declared property setter: - (void)setBlanked:(BOOL)blanked;	// 0x36cdbab5
// declared property setter: - (void)setColorMode:(id)mode;	// 0x36cdb83d
// declared property setter: - (void)setContrast:(float)contrast;	// 0x36cdb951
// declared property setter: - (void)setIdealRefreshRate:(float)rate;	// 0x36cdb8f1
// declared property setter: - (void)setInvertsColors:(BOOL)colors;	// 0x36cdb971
// declared property setter: - (void)setMaximumRefreshRate:(float)rate;	// 0x36cdb911
// declared property setter: - (void)setMinimumRefreshRate:(float)rate;	// 0x36cdb931
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x36cdb5e1
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x36cdba1d
// declared property setter: - (void)setOverscanAmount:(float)amount;	// 0x36cdb999
// declared property setter: - (void)setTVMode:(id)mode;	// 0x36cdb785
// declared property setter: - (void)setTVSignalType:(id)type;	// 0x36cdb6dd
// declared property setter: - (void)setTag:(int)tag;	// 0x36cdb7f1
// declared property setter: - (void)setUsesPreferredModeRefreshRate:(BOOL)rate;	// 0x36cdb8c9
// declared property getter: - (int)tag;	// 0x36cdafb1
// declared property getter: - (BOOL)usesPreferredModeRefreshRate;	// 0x36cdaf19
@end
