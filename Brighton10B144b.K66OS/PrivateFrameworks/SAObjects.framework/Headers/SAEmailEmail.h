/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SADomainObject.h"

@class NSString, SAPersonAttribute, NSArray, NSURL, NSDate, NSNumber;

@interface SAEmailEmail : SADomainObject {
}
@property(copy, nonatomic) NSDate *dateSent;	// G=0x353d8241; S=0x353d825d; 
@property(retain, nonatomic) SAPersonAttribute *fromEmail;	// G=0x353d82ad; S=0x353d8301; 
@property(copy, nonatomic) NSString *message;	// G=0x353d833d; S=0x353d8359; 
@property(copy, nonatomic) NSNumber *outgoing;	// G=0x353d83a9; S=0x353d83c5; 
@property(copy, nonatomic) NSArray *receivingAddresses;	// G=0x353d8415; S=0x353d8431; 
@property(copy, nonatomic) NSArray *recipientsBcc;	// G=0x353d8481; S=0x353d84fd; 
@property(copy, nonatomic) NSArray *recipientsCc;	// G=0x353d8565; S=0x353d85e1; 
@property(copy, nonatomic) NSArray *recipientsTo;	// G=0x353d8649; S=0x353d86c5; 
@property(copy, nonatomic) NSURL *referenceId;	// G=0x353d872d; S=0x353d87a9; 
@property(copy, nonatomic) NSString *subject;	// G=0x353d8809; S=0x353d8825; 
@property(copy, nonatomic) NSString *timeZoneId;	// G=0x353d8875; S=0x353d8891; 
@property(copy, nonatomic) NSString *type;	// G=0x353d88e1; S=0x353d88fd; 
+ (id)email;	// 0x353d81b1
+ (id)emailWithDictionary:(id)dictionary context:(id)context;	// 0x353d81f5
// declared property getter: - (id)dateSent;	// 0x353d8241
- (id)encodedClassName;	// 0x353d81a5
// declared property getter: - (id)fromEmail;	// 0x353d82ad
- (id)groupIdentifier;	// 0x353d8195
// declared property getter: - (id)message;	// 0x353d833d
// declared property getter: - (id)outgoing;	// 0x353d83a9
// declared property getter: - (id)receivingAddresses;	// 0x353d8415
// declared property getter: - (id)recipientsBcc;	// 0x353d8481
// declared property getter: - (id)recipientsCc;	// 0x353d8565
// declared property getter: - (id)recipientsTo;	// 0x353d8649
// declared property getter: - (id)referenceId;	// 0x353d872d
// declared property setter: - (void)setDateSent:(id)sent;	// 0x353d825d
// declared property setter: - (void)setFromEmail:(id)email;	// 0x353d8301
// declared property setter: - (void)setMessage:(id)message;	// 0x353d8359
// declared property setter: - (void)setOutgoing:(id)outgoing;	// 0x353d83c5
// declared property setter: - (void)setReceivingAddresses:(id)addresses;	// 0x353d8431
// declared property setter: - (void)setRecipientsBcc:(id)bcc;	// 0x353d84fd
// declared property setter: - (void)setRecipientsCc:(id)cc;	// 0x353d85e1
// declared property setter: - (void)setRecipientsTo:(id)to;	// 0x353d86c5
// declared property setter: - (void)setReferenceId:(id)anId;	// 0x353d87a9
// declared property setter: - (void)setSubject:(id)subject;	// 0x353d8825
// declared property setter: - (void)setTimeZoneId:(id)anId;	// 0x353d8891
// declared property setter: - (void)setType:(id)type;	// 0x353d88fd
// declared property getter: - (id)subject;	// 0x353d8809
// declared property getter: - (id)timeZoneId;	// 0x353d8875
// declared property getter: - (id)type;	// 0x353d88e1
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353d894d
@end
