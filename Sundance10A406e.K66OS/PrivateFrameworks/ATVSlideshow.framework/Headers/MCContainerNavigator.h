/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSString, NSMutableDictionary, NSSet, MCPlugHaven;

@interface MCContainerNavigator : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSString *mStartPlugID;	// 32 = 0x20
	MCPlugHaven *mStartPlug;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x3614ad5d; 
@property(readonly, assign) NSSet *plugs;	// G=0x3614ac11; 
@property(readonly, assign) MCPlugHaven *startPlug;	// G=0x3614b935; @synthesize=mStartPlug
@property(copy, nonatomic) NSString *startPlugID;	// G=0x3614b921; S=0x3614b7c5; @synthesize=mStartPlugID
- (id)init;	// 0x3614a655
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3614a6b9
- (void)changeIDOfPlug:(id)plug toID:(id)anId;	// 0x3614b18d
// declared property getter: - (unsigned)countOfPlugs;	// 0x3614ad5d
- (void)demolish;	// 0x3614a881
- (id)imprint;	// 0x3614aa9d
- (id)plugForID:(id)anId;	// 0x3614ae29
// declared property getter: - (id)plugs;	// 0x3614ac11
- (void)removeAllPlugs;	// 0x3614b551
- (void)removePlug:(id)plug;	// 0x3614b2fd
- (void)removePlugForID:(id)anId;	// 0x3614b519
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x3614af25
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x3614b7c5
// declared property getter: - (id)startPlug;	// 0x3614b935
// declared property getter: - (id)startPlugID;	// 0x3614b921
@end

