/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCContainer.h"

@class NSSet, NSMutableDictionary, MCPlugHaven, NSString;

@interface MCContainerNavigator : MCContainer {
	NSMutableDictionary *mPlugs;	// 28 = 0x1c
	NSString *mStartPlugID;	// 32 = 0x20
	MCPlugHaven *mStartPlug;	// 36 = 0x24
}
@property(readonly, assign) unsigned countOfPlugs;	// G=0x32fa165d; 
@property(readonly, assign) NSSet *plugs;	// G=0x32fa1519; 
@property(readonly, assign) MCPlugHaven *startPlug;	// G=0x32fa1e21; @synthesize=mStartPlug
@property(copy, nonatomic) NSString *startPlugID;	// G=0x32fa1e11; S=0x32fa1cad; @synthesize=mStartPlugID
- (id)init;	// 0x32fa0fbd
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x32fa1021
// declared property getter: - (unsigned)countOfPlugs;	// 0x32fa165d
- (void)demolish;	// 0x32fa11c9
- (id)imprint;	// 0x32fa13c9
- (id)plugForID:(id)anId;	// 0x32fa1719
// declared property getter: - (id)plugs;	// 0x32fa1519
- (void)removePlug:(id)plug;	// 0x32fa1a69
- (void)removePlugForID:(id)anId;	// 0x32fa1c79
- (id)setPlugForContainer:(id)container forID:(id)anId;	// 0x32fa1809
// declared property setter: - (void)setStartPlugID:(id)anId;	// 0x32fa1cad
// declared property getter: - (id)startPlug;	// 0x32fa1e21
// declared property getter: - (id)startPlugID;	// 0x32fa1e11
@end

