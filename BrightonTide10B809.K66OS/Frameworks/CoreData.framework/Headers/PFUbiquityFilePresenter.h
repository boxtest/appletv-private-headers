/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "NSFilePresenter.h"

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSURL, NSOperationQueue;

@interface PFUbiquityFilePresenter : NSObject <NSFilePresenter> {
	PFUbiquityLocation *_ubiquityRootLocation;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	NSURL *_presentedItemURL;	// 12 = 0xc
	unsigned long long _lastFSEventIdentifier;	// 16 = 0x10
	NSMutableDictionary *_delegates;	// 24 = 0x18
}
@property(assign) unsigned long long lastPresentedItemEventIdentifier;	// G=0x30faf315; S=0x30faf301; converted property
@property(readonly, assign) NSString *localPeerID;	// G=0x30faf341; @synthesize=_localPeerID
@property(readonly, assign) NSOperationQueue *presentedItemOperationQueue;	// G=0x30faee75; 
@property(readonly, assign) NSURL *presentedItemURL;	// G=0x30faee65; 
@property(readonly, assign) NSURL *primaryPresentedItemURL;
@property(readonly, assign) PFUbiquityLocation *ubiquityRootLocation;	// G=0x30faf32d; @synthesize=_ubiquityRootLocation
+ (void)initialize;	// 0x30faec01
+ (id)sharedPrivateOperationQueue;	// 0x30faec65
- (id)init;	// 0x30faec75
- (id)initWithUbiquityRootLocation:(id)ubiquityRootLocation andLocalPeerID:(id)anId;	// 0x30faecd9
- (void)dealloc;	// 0x30faed5d
- (id)description;	// 0x30faeded
// converted property getter: - (unsigned long long)lastPresentedItemEventIdentifier;	// 0x30faf315
// declared property getter: - (id)localPeerID;	// 0x30faf341
// declared property getter: - (id)presentedItemOperationQueue;	// 0x30faee75
// declared property getter: - (id)presentedItemURL;	// 0x30faee65
- (void)presentedSubitemDidChangeAtURL:(id)presentedSubitem;	// 0x30faeea1
- (void)relinquishPresentedItemToReader:(id)reader;	// 0x30faee91
- (void)relinquishPresentedItemToWriter:(id)writer;	// 0x30faee99
// converted property setter: - (void)setLastPresentedItemEventIdentifier:(unsigned long long)identifier;	// 0x30faf301
// declared property getter: - (id)ubiquityRootLocation;	// 0x30faf32d
@end

