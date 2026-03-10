 Microsoft.Identity.Client.Utils.StopwatchService.MeasureCodeBlockAsync(Func`1 codeBlock)
   at Microsoft.Identity.Client.Internal.Requests.RequestBase.RunAsync(CancellationToken cancellationToken)
	StatusCode: 0 
	ResponseBody:  
	Headers: 

******END MSAL DIAGNOSTICS******
03/10/2026 17:05:03 Russia TZ 2 Standard Time : Error : AcquireTokenException: WAM Error  
 Error Code: 3399614467 
 Error Message: V2Error: invalid_grant AADSTS700082: The refresh token has expired due to inactivity. The token was issued on 2025-06-05T18:59:16.3376695Z and was inactive for 90.00:00:00. Trace ID: 077712fb-4e81-4169-add9-55ed7f4e8600 Correlation ID: de58d5ad-1fb8-4bd1-aea8-d567b8f5a4e3 Timestamp: 2026-03-10 14:05:03Z 
 Internal Error Code: 558133255 

03/10/2026 17:05:04 Russia TZ 2 Standard Time : Error : ******START MSAL DIAGNOSTICS******
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:03Z] [MSAL:0002]	WARNING	ReadAccountById:273	Account id is empty - account not found
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:03Z] [MSAL:0002]	ERROR  	Create:27	Created an error: tag_7cisv, StatusInternal::Unexpected, SubStatusInternal::0
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:03Z] [MSAL:0013]	WARNING	TryEnqueueMsaDeviceCredentialAcquisitionAndContinue:1088	MsaDeviceOperationProvider is not available. Not attempting to register the device.
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:03Z] [MSAL:0002]	WARNING	DiscardAccessAndIdTokensIfUnusable:873	No access token found in the cache
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:03Z] [MSAL:0002]	WARNING	GetPlatformPropertiesFromStorage:2054	No account found in cache.
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:04Z] [MSAL:0007]	ERROR  	ErrorInternalImpl:134	Created an error: 7rhah, StatusInternal::InteractionRequired, InternalEvent::None, Error Code 3399614467, Context 'V2Error: invalid_grant AADSTS700082: The refresh token has expired due to inactivity. The token was issued on 2025-06-05T18:59:16.3376695Z and was inactive for 90.00:00:00. Trace ID: 077712fb-4e81-4169-add9-55ed7f4e8600 Correlation ID: de58d5ad-1fb8-4bd1-aea8-d567b8f5a4e3 Timestamp: 2026-03-10 14:05:03Z'
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:04Z] [MSAL:0002]	ERROR  	ErrorInternalImpl:134	Created an error: 7rhah, StatusInternal::InteractionRequired, InternalEvent::None, Error Code 3399614467, Context 'V2Error: invalid_grant AADSTS700082: The refresh token has expired due to inactivity. The token was issued on 2025-06-05T18:59:16.3376695Z and was inactive for 90.00:00:00. Trace ID: 077712fb-4e81-4169-add9-55ed7f4e8600 Correlation ID: de58d5ad-1fb8-4bd1-aea8-d567b8f5a4e3 Timestamp: 2026-03-10 14:05:03Z'
True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:04Z] [RuntimeBroker] failed_to_acquire_token_silently_from_broker WAM Error  
 Error Code: 3399614467 
 Error Message: V2Error: invalid_grant AADSTS700082: The refresh token has expired due to inactivity. The token was issued on 2025-06-05T18:59:16.3376695Z and was inactive for 90.00:00:00. Trace ID: 077712fb-4e81-4169-add9-55ed7f4e8600 Correlation ID: de58d5ad-1fb8-4bd1-aea8-d567b8f5a4e3 Timestamp: 2026-03-10 14:05:03Z 
 Internal Error Code: 558133255 

True MSAL 4.69.1.0 MSAL.NetCore .NET 8.0.24 Microsoft Windows 10.0.19045 [2026-03-10 14:05:04Z - 84536884-3f41-490d-840d-73dc4b12082f] MSAL.NetCore.4.69.1.0.MsalUiRequiredException:
	ErrorCode: failed_to_acquire_token_silently_from_broker
Microsoft.Identity.Client.MsalUiRequiredException: WAM Error  
 Error Code: 3399614467 
 Error Message: V2Error: invalid_grant AADSTS700082: The refresh token has expired due to inactivity. The token was issued on 2025-06-05T18:59:16.3376695Z and was inactive for 90.00:00:00. Trace ID: 077712fb-4e81-4169-add9-55ed7f4e8600 Correlation ID: de58d5ad-1fb8-4bd1-aea8-d567b8f5a4e3 Timestamp: 2026-03-10 14:05:03Z 
 Internal Error Code: 558133255 

   at Microsoft.Identity.Client.Internal.Requests.Silent.SilentRequest.ExecuteAsync(CancellationToken cancellationToken)
   at Microsoft.Identity.Client.Internal.Requests.RequestBase.<>c__DisplayClass11_1.<<RunAsync>b__