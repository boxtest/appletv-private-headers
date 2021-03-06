/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MIME-Structs.h"

@class MessageStore, NSArray, NSString;

@interface Message : NSObject <NSCopying> {
	MessageStore *_store;	// 4 = 0x4
	unsigned long _preferredEncoding;	// 8 = 0x8
	NSString *_senderAddressComment;	// 12 = 0xc
	unsigned _dateSentInterval;	// 16 = 0x10
	unsigned _dateReceivedInterval;	// 20 = 0x14
	unsigned long long _generationNumber;	// 24 = 0x18
	NSString *_subject;	// 32 = 0x20
	NSArray *_to;	// 36 = 0x24
	NSArray *_cc;	// 40 = 0x28
	NSArray *_bcc;	// 44 = 0x2c
	NSArray *_sender;	// 48 = 0x30
	NSString *_contentType;	// 52 = 0x34
	long long _messageIDHeaderHash;	// 56 = 0x38
	long long _conversationID;	// 64 = 0x40
	NSString *_summary;	// 72 = 0x48
	NSString *_externalID;	// 76 = 0x4c
	unsigned _calculatedAttachmentInfo : 1;	// 80 = 0x50
	unsigned short _numberOfAttachments;	// 82 = 0x52
}
@property(retain) NSArray *bcc;	// G=0x31b18975; S=0x31b1899d; converted property
@property(retain) NSArray *cc;	// G=0x31b187e9; S=0x31b18811; converted property
@property(retain) NSString *contentType;	// G=0x31b18251; S=0x31b182e1; converted property
@property(assign) long long conversationID;	// G=0x31b18b01; S=0x31b18b51; converted property
@property(retain) NSString *externalID;	// G=0x31b18b9d; S=0x31b18be1; converted property
@property(assign) unsigned long long generationNumber;	// G=0x31b1955d; S=0x31b19549; converted property
@property(assign) long long messageIDHash;	// G=0x31b175b1; S=0x31b18b29; converted property
@property(retain) id messageStore;	// G=0x31b17131; S=0x31b17175; converted property
@property(readonly, assign) unsigned short numberOfAttachments;	// G=0x31b17751; converted property
@property(assign) unsigned long preferredEncoding;	// G=0x31b17775; S=0x31b17785; converted property
@property(readonly, retain) NSString *senderAddressComment;	// G=0x31b185b9; converted property
@property(retain) NSString *subject;	// G=0x31b17f6d; S=0x31b18001; converted property
@property(readonly, retain) NSString *summary;	// G=0x31b18c31; converted property
@property(retain) NSArray *to;	// G=0x31b1865d; S=0x31b18685; converted property
+ (Class)dataMessageStoreToUse;	// 0x31b17019
+ (id)messageWithRFC822Data:(id)rfc822Data;	// 0x31b17035
+ (void)setMessageClassForStore:(id)store;	// 0x31b170ad
- (id)init;	// 0x31b170dd
- (void)_calculateAttachmentInfoFromBody:(id)body;	// 0x31b19409
- (id)_copyDateFromDateHeaderInHeaders:(id)headers;	// 0x31b17a19
- (id)_copyDateFromReceivedHeadersInHeaders:(id)headers;	// 0x31b17891
- (BOOL)_doesDateAppearToBeSane:(id)beSane;	// 0x31b17851
- (long long)_messageIDHeaderHashIvar;	// 0x31b17715
- (void)_setDateReceivedFromHeaders:(id)headers;	// 0x31b17b15
- (void)_setDateSentFromHeaders:(id)headers;	// 0x31b17ba9
- (id)additionalHeadersForForward;	// 0x31b1966d
- (id)additionalHeadersForReply;	// 0x31b1963d
// converted property getter: - (id)bcc;	// 0x31b18975
- (id)bccIfCached;	// 0x31b18989
- (id)bestAlternativeInPart:(id)part;	// 0x31b19609
- (id)bodyData;	// 0x31b19239
- (id)bodyDataIsComplete:(BOOL *)complete;	// 0x31b19275
- (id)bodyDataIsComplete:(BOOL *)complete isPartial:(BOOL *)partial;	// 0x31b19289
- (id)bodyDataIsComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x31b192ad
- (id)cachedAttributes;	// 0x31b19501
- (void)calculateAttachmentInfoFromBody:(id)body;	// 0x31b1940d
- (BOOL)calculatedNumberOfAttachments;	// 0x31b17761
- (BOOL)canBeDeleted;	// 0x31b19635
// converted property getter: - (id)cc;	// 0x31b187e9
- (id)ccIfCached;	// 0x31b187fd
// converted property getter: - (id)contentType;	// 0x31b18251
// converted property getter: - (long long)conversationID;	// 0x31b18b01
- (id)copyWithZone:(NSZone *)zone;	// 0x31b1711d
- (id)dataConsumerForMimePart:(id)mimePart;	// 0x31b1746d
- (id)dataForMimePart:(id)mimePart;	// 0x31b19331
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete;	// 0x31b19375
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;	// 0x31b193bd
- (id)dataPathForMimePart:(id)mimePart;	// 0x31b19405
- (id)dateReceived;	// 0x31b18079
- (double)dateReceivedAsTimeIntervalSince1970;	// 0x31b18185
- (id)dateSent;	// 0x31b180e5
- (double)dateSentAsTimeIntervalSince1970;	// 0x31b181e9
- (void)dealloc;	// 0x31b17471
- (id)defaultAlternativeInPart:(id)part;	// 0x31b195dd
// converted property getter: - (id)externalID;	// 0x31b18b9d
- (id)firstSender;	// 0x31b1840d
- (int)generationCompare:(id)compare;	// 0x31b19575
// converted property getter: - (unsigned long long)generationNumber;	// 0x31b1955d
- (id)headerData;	// 0x31b192e9
- (id)headerDataDownloadIfNecessary:(BOOL)necessary;	// 0x31b192fd
- (id)headers;	// 0x31b171d1
- (id)headersIfAvailable;	// 0x31b17201
- (BOOL)isLibraryMessage;	// 0x31b19639
- (BOOL)isMessageContentsLocallyAvailable;	// 0x31b1774d
- (void)loadCachedHeaderValuesFromHeaders:(id)headers;	// 0x31b17c3d
- (id)messageBody;	// 0x31b17231
- (id)messageBodyIfAvailable;	// 0x31b17269
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)flags;	// 0x31b172d9
- (id)messageBodyUpdatingFlags:(BOOL)flags;	// 0x31b172a1
- (id)messageData;	// 0x31b17455
- (BOOL)messageData:(id *)data messageSize:(unsigned *)size isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x31b17311
- (id)messageDataIsComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x31b17429
- (id)messageID;	// 0x31b175ad
// converted property getter: - (long long)messageIDHash;	// 0x31b175b1
- (id)messageIDHeader;	// 0x31b1764d
- (id)messageIDHeaderInFortyBytesOrLess;	// 0x31b17685
- (unsigned)messageSize;	// 0x31b1757d
// converted property getter: - (id)messageStore;	// 0x31b17131
- (BOOL)needsDateReceived;	// 0x31b181d1
// converted property getter: - (unsigned short)numberOfAttachments;	// 0x31b17751
- (id)path;	// 0x31b19231
- (id)persistentID;	// 0x31b19235
- (id)preferredEmailAddressToReplyWith;	// 0x31b175a9
// converted property getter: - (unsigned long)preferredEncoding;	// 0x31b17775
- (id)refreshedMessage;	// 0x31b1712d
- (id)remoteID;	// 0x31b1921d
// converted property getter: - (id)senderAddressComment;	// 0x31b185b9
- (id)senders;	// 0x31b18359
- (id)sendersIfCached;	// 0x31b183f9
// converted property setter: - (void)setBcc:(id)bcc;	// 0x31b1899d
// converted property setter: - (void)setCc:(id)cc;	// 0x31b18811
// converted property setter: - (void)setContentType:(id)type;	// 0x31b182e1
// converted property setter: - (void)setConversationID:(long long)anId;	// 0x31b18b51
- (void)setDateReceivedTimeIntervalSince1970:(double)a1970;	// 0x31b18151
- (void)setDateSentTimeIntervalSince1970:(double)a1970;	// 0x31b18235
// converted property setter: - (void)setExternalID:(id)anId;	// 0x31b18be1
// converted property setter: - (void)setGenerationNumber:(unsigned long long)number;	// 0x31b19549
- (void)setMessageData:(id)data isPartial:(BOOL)partial;	// 0x31b17469
// converted property setter: - (void)setMessageIDHash:(long long)hash;	// 0x31b18b29
- (void)setMessageInfo:(id)info to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceivedTimeIntervalSince1970:(double)a1970 dateSentTimeIntervalSince1970:(double)a19707 messageIDHash:(long long)hash conversationID:(long long)anId summary:(id)summary;	// 0x31b18d65
- (void)setMessageInfoFromMessage:(id)message;	// 0x31b190f1
// converted property setter: - (void)setMessageStore:(id)store;	// 0x31b17175
- (void)setNumberOfAttachments:(unsigned)attachments;	// 0x31b194f1
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted;	// 0x31b194b5
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x31b17785
- (void)setSender:(id)sender;	// 0x31b18455
// converted property setter: - (void)setSubject:(id)subject;	// 0x31b18001
- (void)setSubject:(id)subject to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceived:(double)received dateSent:(double)sent messageIDHash:(long long)hash conversationIDHash:(long long)hash9 summary:(id)summary withOptions:(unsigned)options;	// 0x31b18dc1
// converted property setter: - (void)setTo:(id)to;	// 0x31b18685
// converted property getter: - (id)subject;	// 0x31b17f6d
// converted property getter: - (id)summary;	// 0x31b18c31
// converted property getter: - (id)to;	// 0x31b1865d
- (id)toIfCached;	// 0x31b18671
- (unsigned long)uid;	// 0x31b1922d
- (id)uniqueArray:(id)array withStore:(id)store;	// 0x31b18c75
@end

