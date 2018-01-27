using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace WCFServer
   {
   class Program
      {
      static void Main(string[] args)
         {

         System.ServiceModel.ServiceHost host =
            new System.ServiceModel.ServiceHost(typeof(WCFServer.Service)/*,
            new Uri[] { new Uri("http://localhost:8080/LeakingService")}*/);

         host.Open();
         System.Console.WriteLine("Server listening");
         Service.s_ev.WaitOne();
         host.Close();

         System.Console.WriteLine("Server closed");
         }
      }
   }
