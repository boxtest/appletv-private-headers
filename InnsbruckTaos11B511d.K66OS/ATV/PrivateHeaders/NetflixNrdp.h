/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NSString, NSMutableDictionary;

@interface NetflixNrdp : NetflixNrdObject <NetflixNrdObjectProtocol> {
	BOOL isReady_;	// 4 = 0x4
	BOOL isError_;	// 5 = 0x5
	NSMutableDictionary *eventListeners_;	// 8 = 0x8
	NSMutableDictionary *syncData_;	// 12 = 0xc
	NSMutableDictionary *setPropertyPending_;	// 16 = 0x10
	NSMutableDictionary *setPropertyCurrent_;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *ACTION_ID;	// G=0x5a67dd; 
@property(readonly, assign, nonatomic) NSString *COMPLETE;	// G=0x5a67e9; 
@property(readonly, assign, nonatomic) NSString *ERROR;	// G=0x5a6801; 
@property(readonly, assign, nonatomic) NSString *NETWORK_ERROR;	// G=0x5a67f5; 
@property(readonly, assign, nonatomic) NSString *READY;	// G=0x5a67d1; 
@property(retain) NSMutableDictionary *eventListeners;	// G=0x5a7d51; S=0x5a7d65; @synthesize=eventListeners_
@property(assign) BOOL isError;	// G=0x5a7d21; S=0x5a7d39; @synthesize=isError_
@property(assign) BOOL isReady;	// G=0x5a7cf1; S=0x5a7d09; @synthesize=isReady_
@property(retain) NSMutableDictionary *setPropertyCurrent;	// G=0x5a7dbd; S=0x5a7dd1; @synthesize=setPropertyCurrent_
@property(retain) NSMutableDictionary *setPropertyPending;	// G=0x5a7d99; S=0x5a7dad; @synthesize=setPropertyPending_
@property(retain) NSMutableDictionary *syncData;	// G=0x5a7d75; S=0x5a7d89; @synthesize=syncData_
+ (id)sharedInstance;	// 0x5a655d
- (id)init;	// 0x5a6649
// declared property getter: - (id)ACTION_ID;	// 0x5a67dd
// declared property getter: - (id)COMPLETE;	// 0x5a67e9
// declared property getter: - (id)ERROR;	// 0x5a6801
// declared property getter: - (id)NETWORK_ERROR;	// 0x5a67f5
// declared property getter: - (id)READY;	// 0x5a67d1
- (void)addEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x5a7181
- (void)addEventListener:(id)listener name:(id)name;	// 0x5a7129
- (void)callEventListeners:(id)listeners event:(id)event;	// 0x5a748d
- (void)dealloc;	// 0x5a6729
// declared property getter: - (id)eventListeners;	// 0x5a7d51
- (id)getSubObject:(id)object;	// 0x5a7c59
- (void)gotEvent:(id)event;	// 0x5a680d
- (BOOL)handleEvent:(id)event;	// 0x5a7039
- (BOOL)handleNccpEvent:(id)event object:(id)object type:(id)type;	// 0x5a79c1
// declared property getter: - (BOOL)isError;	// 0x5a7d21
// declared property getter: - (BOOL)isReady;	// 0x5a7cf1
- (void)notifyEventListeners:(id)listeners type:(id)type parameters:(id)parameters;	// 0x5a75e5
- (void)removeEventListener:(id)listener listener:(id)listener2 name:(id)name;	// 0x5a72ad
- (void)removeEventListener:(id)listener name:(id)name;	// 0x5a7155
// declared property setter: - (void)setEventListeners:(id)listeners;	// 0x5a7d65
// declared property setter: - (void)setIsError:(BOOL)error;	// 0x5a7d39
// declared property setter: - (void)setIsReady:(BOOL)ready;	// 0x5a7d09
- (void)setProperty:(id)property property:(id)property2 value:(id)value;	// 0x5a76ed
// declared property getter: - (id)setPropertyCurrent;	// 0x5a7dbd
// declared property getter: - (id)setPropertyPending;	// 0x5a7d99
// declared property setter: - (void)setSetPropertyCurrent:(id)current;	// 0x5a7dd1
// declared property setter: - (void)setSetPropertyPending:(id)pending;	// 0x5a7dad
// declared property setter: - (void)setSyncData:(id)data;	// 0x5a7d89
// declared property getter: - (id)syncData;	// 0x5a7d75
- (id)syncDataForObject:(id)object;	// 0x5a78c9
@end

