/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class MPMediaItem, MPMediaLibrary;

@interface MPMediaEntity : NSObject <NSCopying, NSCoding> {
}
@property(readonly, assign, nonatomic) BOOL isDownloadable;	// G=0x36d596ad; 
@property(readonly, assign, nonatomic) BOOL isDownloadableStoreOffer;	// G=0x36d5971d; 
@property(readonly, assign, nonatomic) BOOL isPurchasableStoreOffer;	// G=0x36d597d5; 
@property(readonly, assign, nonatomic) MPMediaLibrary *mediaLibrary;	// G=0x36d19895; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x36d1955d; 
@property(readonly, assign, nonatomic) int preferredStoreOfferVariant;	// G=0x36d59719; 
@property(readonly, assign, nonatomic) MPMediaItem *representativeItem;	// G=0x36d19591; 
+ (BOOL)canFilterByProperty:(id)property;	// 0x36d19511
- (id)initWithCoder:(id)coder;	// 0x36d19669
- (id)buyOffer;	// 0x36d596e9
- (id)buyOfferForVariant:(int)variant;	// 0x36d596b1
- (id)completionOfferForVariant:(int)variant;	// 0x36d596b5
- (id)copyWithZone:(NSZone *)zone;	// 0x36d19885
- (void)encodeWithCoder:(id)coder;	// 0x36d196f9
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x36d1959d
- (unsigned)hash;	// 0x36d19825
// declared property getter: - (BOOL)isDownloadable;	// 0x36d596ad
// declared property getter: - (BOOL)isDownloadableStoreOffer;	// 0x36d5971d
- (BOOL)isEqual:(id)equal;	// 0x36d19775
// declared property getter: - (BOOL)isPurchasableStoreOffer;	// 0x36d597d5
// declared property getter: - (id)mediaLibrary;	// 0x36d19895
// declared property getter: - (unsigned long long)persistentID;	// 0x36d1955d
// declared property getter: - (int)preferredStoreOfferVariant;	// 0x36d59719
// declared property getter: - (id)representativeItem;	// 0x36d19591
- (id)valueForProperty:(id)property;	// 0x36d19595
- (id)valuesForProperties:(id)properties;	// 0x36d19599
@end
