/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class NSString, NSArray;

@interface SALocalSearchOfferList : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *offers;	// G=0x303dc2ad; S=0x303dc329; 
@property(copy, nonatomic) NSString *providerId;	// G=0x303dc391; S=0x303dc3ad; 
+ (id)offerList;	// 0x303dc21d
+ (id)offerListWithDictionary:(id)dictionary context:(id)context;	// 0x303dc261
- (id)encodedClassName;	// 0x303dc211
- (id)groupIdentifier;	// 0x303dc201
// declared property getter: - (id)offers;	// 0x303dc2ad
// declared property getter: - (id)providerId;	// 0x303dc391
// declared property setter: - (void)setOffers:(id)offers;	// 0x303dc329
// declared property setter: - (void)setProviderId:(id)anId;	// 0x303dc3ad
@end

