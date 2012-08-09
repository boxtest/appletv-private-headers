/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSRoot, ATVMerchant, NSMutableArray, NSObject, ATVJSStorage, ATVFeedDocument, NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVJSContext : XXUnknownSuperclass {
	ATVMerchant *_merchant;	// 4 = 0x4
	ATVFeedDocument *_feedDocument;	// 8 = 0x8
	OpaqueJSContext *_context;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
	ATVJSStorage *_atvLocalStorage;	// 20 = 0x14
	ATVJSStorage *_atvSessionStorage;	// 24 = 0x18
	ATVJSRoot *_atvRoot;	// 28 = 0x1c
	NSMutableDictionary *_classesByName;	// 32 = 0x20
	NSMutableArray *_postEvalCommandBlocks;	// 36 = 0x24
	int _configuration;	// 40 = 0x28
}
@property(retain, nonatomic) ATVJSStorage *atvLocalStorage;	// G=0x16ff15; S=0x16ff25; @synthesize=_atvLocalStorage
@property(retain, nonatomic) ATVJSRoot *atvRoot;	// G=0x16ff55; S=0x16ff65; @synthesize=_atvRoot
@property(retain, nonatomic) ATVJSStorage *atvSessionStorage;	// G=0x16ff35; S=0x16ff45; @synthesize=_atvSessionStorage
@property(retain, nonatomic) NSMutableDictionary *classesByName;	// G=0x16ff75; S=0x16ff85; @synthesize=_classesByName
@property(assign, nonatomic) int configuration;	// G=0x16ffb5; S=0x16ffc5; @synthesize=_configuration
@property(assign, nonatomic) OpaqueJSContext *context;	// G=0x16fed5; S=0x16fee5; @synthesize=_context
@property(assign, nonatomic) ATVFeedDocument *feedDocument;	// G=0x16feb5; S=0x16fec5; @synthesize=_feedDocument
@property(readonly, assign, nonatomic) ATVMerchant *merchant;	// G=0x16fea5; @synthesize=_merchant
@property(retain, nonatomic) NSMutableArray *postEvalCommandBlocks;	// G=0x16ff95; S=0x16ffa5; @synthesize=_postEvalCommandBlocks
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *queue;	// G=0x16fef5; S=0x16ff05; @synthesize=_queue
+ (id)contextFromJSContext:(OpaqueJSContext *)jscontext;	// 0x16ea09
+ (id)contextWithConfiguration:(int)configuration merchant:(id)merchant;	// 0x16e991
+ (id)contextWithConfiguration:(int)configuration merchant:(id)merchant feedDocument:(id)document;	// 0x16e9b5
- (id)initWithConfiguration:(int)configuration merchant:(id)merchant feedDocument:(id)document;	// 0x16e7b5
- (void)_configureClass:(Class)aClass inContext:(OpaqueJSContext *)context forObject:(OpaqueJSValue *)object;	// 0x1703c5
- (void)_setupGlobalObjects:(OpaqueJSContext *)objects;	// 0x170405
- (void)addPostEvalCommand:(id)command;	// 0x1700bd
- (void)appExit;	// 0x1713f1
// declared property getter: - (id)atvLocalStorage;	// 0x16ff15
// declared property getter: - (id)atvRoot;	// 0x16ff55
// declared property getter: - (id)atvSessionStorage;	// 0x16ff35
- (void)authenticateUsername:(id)username password:(id)password object:(id)object completionHandler:(id)handler;	// 0x170f35
- (void)callFunction:(id)function;	// 0x16fc99
- (void)callFunction:(id)function withArguments:(id)arguments;	// 0x16fcbd
- (void)callFunction:(id)function withArguments:(id)arguments completionQueue:(id)queue completionHandler:(id)handler;	// 0x16f799
- (BOOL)callSynchronousFunction:(id)function withArguments:(id)arguments returnValue:(id *)value;	// 0x16f505
- (OpaqueJSClass *)classForName:(id)name;	// 0x170085
// declared property getter: - (id)classesByName;	// 0x16ff75
// declared property getter: - (int)configuration;	// 0x16ffb5
// declared property getter: - (OpaqueJSContext *)context;	// 0x16fed5
- (void)dealloc;	// 0x16ea1d
- (BOOL)decorateRequestProperties:(id)properties;	// 0x170995
- (void)destroyJSContext;	// 0x16eaa5
- (void)evaluateBlockInContextsQueue:(id)contextsQueue;	// 0x16eb8d
- (void)evaluateBlockInContextsQueue:(id)contextsQueue completionQueue:(id)queue completionHandler:(id)handler;	// 0x16ebad
- (void)evaluateScript:(id)script sourceURL:(id)url;	// 0x16f20d
- (void)evaluateScript:(id)script sourceURL:(id)url completionQueue:(id)queue completionHandler:(id)handler;	// 0x16ee11
- (void)evaluateScriptAtURL:(id)url completionQueue:(id)queue completionHandler:(id)handler;	// 0x16f235
// declared property getter: - (id)feedDocument;	// 0x16feb5
- (BOOL)generateRequest:(id)request;	// 0x170c65
- (void)logout;	// 0x1713d5
// declared property getter: - (id)merchant;	// 0x16fea5
- (void)pageBuried:(id)buried;	// 0x17149d
- (void)pageExhumed:(id)exhumed;	// 0x1714e5
- (void)pageLoad:(id)load;	// 0x17140d
- (void)pageUnload:(id)unload;	// 0x171455
// declared property getter: - (id)postEvalCommandBlocks;	// 0x16ff95
- (id)pruneUndefinedFunctions:(id)functions;	// 0x16fce5
// declared property getter: - (id)queue;	// 0x16fef5
// declared property setter: - (void)setAtvLocalStorage:(id)storage;	// 0x16ff25
// declared property setter: - (void)setAtvRoot:(id)root;	// 0x16ff65
// declared property setter: - (void)setAtvSessionStorage:(id)storage;	// 0x16ff45
- (void)setClass:(OpaqueJSClass *)aClass forName:(id)name;	// 0x16ffd5
// declared property setter: - (void)setClassesByName:(id)name;	// 0x16ff85
// declared property setter: - (void)setConfiguration:(int)configuration;	// 0x16ffc5
// declared property setter: - (void)setContext:(OpaqueJSContext *)context;	// 0x16fee5
// declared property setter: - (void)setFeedDocument:(id)document;	// 0x16fec5
// declared property setter: - (void)setPostEvalCommandBlocks:(id)blocks;	// 0x16ffa5
// declared property setter: - (void)setQueue:(id)queue;	// 0x16ff05
@end
