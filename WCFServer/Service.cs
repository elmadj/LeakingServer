using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.Serialization;
using System.ServiceModel;
using System.Text;
using clrnative2;

namespace WCFServer
   {
   // REMARQUE : vous pouvez utiliser la commande Renommer du menu Refactoriser pour changer le nom de classe "Service" à la fois dans le code et le fichier de configuration.
   public class Service : IService
      {
      public void DoWork()
         {
         clrnative2.CLRClass myObject = new clrnative2.CLRClass();
         System.Console.Out.WriteLine("WORKING....");

         }

      public void StopServer()
         {
         s_ev.Set();
         }


      public static System.Threading.ManualResetEvent s_ev = new System.Threading.ManualResetEvent(false);
      }
   }
