/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ISURLOperationDelegate.h"
#import "BRMercantile.h"

@class SSURLRequestProperties, ISURLOperation, NSError, NSURLRequest, BRMerchant, NSURLResponse, NSDate, NSMutableDictionary, NSData, NSArray;

__attribute__((visibility("hidden")))
@interface ATVURLDocument : XXUnknownSuperclass <ISURLOperationDelegate, BRMercantile> {
	SSURLRequestProperties *_properties;	// 4 = 0x4
	ISURLOperation *_operation;	// 8 = 0x8
	id _completionBlock;	// 12 = 0xc
	NSMutableDictionary *_metadata;	// 16 = 0x10
	BOOL _decoratedByMerchant;	// 20 = 0x14
	BOOL _shouldCompleteOnMainThread;	// 21 = 0x15
	BOOL isCanceled;	// 22 = 0x16
	BOOL _didLoad;	// 23 = 0x17
	NSArray *_behaviors;	// 24 = 0x18
	BRMerchant *_merchant;	// 28 = 0x1c
	NSURLRequest *_URLRequest;	// 32 = 0x20
	NSURLResponse *_URLResponse;	// 36 = 0x24
	NSError *_error;	// 40 = 0x28
	NSDate *_requestDate;	// 44 = 0x2c
	NSDate *_loadedDate;	// 48 = 0x30
	NSData *_content;	// 52 = 0x34
	ISURLOperation *_preconfiguredOperation;	// 56 = 0x38
}
@property(retain, nonatomic) NSURLRequest *URLRequest;	// G=0x1afb6d; S=0x1afb7d; @synthesize=_URLRequest
@property(retain, nonatomic) NSURLResponse *URLResponse;	// G=0x1afba5; S=0x1afbb5; @synthesize=_URLResponse
@property(retain, nonatomic) NSArray *behaviors;	// G=0x1afae5; S=0x1adc21; @synthesize=_behaviors
@property(retain, nonatomic) NSData *content;	// G=0x1afc85; S=0x1afc95; @synthesize=_content
@property(assign, nonatomic, getter=isDecoratedByMerchant) BOOL decoratedByMerchant;	// G=0x1afaf5; S=0x1afb05; @synthesize=_decoratedByMerchant
@property(assign) BOOL didLoad;	// G=0x1afced; S=0x1afd05; @synthesize=_didLoad
@property(retain, nonatomic) NSError *error;	// G=0x1afbdd; S=0x1afbed; @synthesize=_error
@property(assign) BOOL isCanceled;	// G=0x1afcbd; S=0x1afcd5; @synthesize
@property(retain, nonatomic) NSDate *loadedDate;	// G=0x1afc4d; S=0x1afc5d; @synthesize=_loadedDate
@property(retain, nonatomic) BRMerchant *merchant;	// G=0x1aec89; S=0x1afb45; @synthesize=_merchant
@property(retain, nonatomic) ISURLOperation *preconfiguredOperation;	// G=0x1afd1d; S=0x1afd2d; @synthesize=_preconfiguredOperation
@property(readonly, assign, nonatomic) id propertyList;	// G=0x1ae6b5; 
@property(retain, nonatomic) NSDate *requestDate;	// G=0x1afc15; S=0x1afc25; @synthesize=_requestDate
@property(assign) BOOL shouldCompleteOnMainThread;	// G=0x1afb15; S=0x1afb2d; @synthesize=_shouldCompleteOnMainThread
@property(readonly, assign, nonatomic) int statusCode;	// G=0x1ae615; 
+ (void)addActiveDocument:(id)document;	// 0x1aeb95
+ (id)documentWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1ad751
+ (id)documentWithURLOperation:(id)urloperation forMerchant:(id)merchant;	// 0x1ad811
+ (id)documentWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1ad7b1
+ (void)initialize;	// 0x1ad871
+ (void)loadDocuments:(id)documents forEachResponse:(id)eachResponse completionHandler:(id)handler;	// 0x1ae2d1
+ (void)removeActiveDocument:(id)document;	// 0x1aec35
- (id)init;	// 0x1adabd
- (id)initWithRequestProperties:(id)requestProperties forMerchant:(id)merchant;	// 0x1ad8dd
- (id)initWithURLOperation:(id)urloperation forMerchant:(id)merchant;	// 0x1adb65
- (id)initWithURLRequest:(id)urlrequest forMerchant:(id)merchant;	// 0x1adae1
- (void).cxx_destruct;	// 0x1afd55
// declared property getter: - (id)URLRequest;	// 0x1afb6d
// declared property getter: - (id)URLResponse;	// 0x1afba5
- (void)_applyBehaviors;	// 0x1ae739
- (void)_finish:(id)finish;	// 0x1ae955
- (void)_runCompletionBlock;	// 0x1aea05
- (id)_templateOperation;	// 0x1aeac9
- (void)addBehavior:(id)behavior;	// 0x1adc7d
// declared property getter: - (id)behaviors;	// 0x1afae5
- (void)cancel;	// 0x1ae209
// declared property getter: - (id)content;	// 0x1afc85
- (void)dealloc;	// 0x1ae191
// declared property getter: - (BOOL)didLoad;	// 0x1afced
// declared property getter: - (id)error;	// 0x1afbdd
// declared property getter: - (BOOL)isCanceled;	// 0x1afcbd
// declared property getter: - (BOOL)isDecoratedByMerchant;	// 0x1afaf5
- (void)load;	// 0x1ae1f5
- (void)loadWithReponseBlock:(id)reponseBlock;	// 0x1add25
// declared property getter: - (id)loadedDate;	// 0x1afc4d
// declared property getter: - (id)merchant;	// 0x1aec89
- (id)metadataForKey:(id)key;	// 0x1ae5f5
- (void)operation:(id)operation didReceiveResponse:(id)response;	// 0x1af865
- (void)operation:(id)operation failedWithError:(id)error;	// 0x1aed65
- (void)operation:(id)operation finishedWithOutput:(id)output;	// 0x1af879
- (void)operation:(id)operation willSendRequest:(id)request;	// 0x1afad1
// declared property getter: - (id)preconfiguredOperation;	// 0x1afd1d
// declared property getter: - (id)propertyList;	// 0x1ae6b5
// declared property getter: - (id)requestDate;	// 0x1afc15
// declared property setter: - (void)setBehaviors:(id)behaviors;	// 0x1adc21
// declared property setter: - (void)setContent:(id)content;	// 0x1afc95
// declared property setter: - (void)setDecoratedByMerchant:(BOOL)merchant;	// 0x1afb05
// declared property setter: - (void)setDidLoad:(BOOL)load;	// 0x1afd05
// declared property setter: - (void)setError:(id)error;	// 0x1afbed
// declared property setter: - (void)setIsCanceled:(BOOL)canceled;	// 0x1afcd5
// declared property setter: - (void)setLoadedDate:(id)date;	// 0x1afc5d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1afb45
- (void)setMetadata:(id)metadata forKey:(id)key;	// 0x1ae5b9
// declared property setter: - (void)setPreconfiguredOperation:(id)operation;	// 0x1afd2d
// declared property setter: - (void)setRequestDate:(id)date;	// 0x1afc25
// declared property setter: - (void)setShouldCompleteOnMainThread:(BOOL)completeOnMainThread;	// 0x1afb2d
// declared property setter: - (void)setURLRequest:(id)request;	// 0x1afb7d
// declared property setter: - (void)setURLResponse:(id)response;	// 0x1afbb5
// declared property getter: - (BOOL)shouldCompleteOnMainThread;	// 0x1afb15
// declared property getter: - (int)statusCode;	// 0x1ae615
@end

